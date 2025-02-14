#pragma once

#include <memory>

#include <FreeRTOS.h>
#include <task.h>
#include <timers.h>

#include "SystemMonitor.h"
#include "displayapp/LittleVgl.h"
#include "displayapp/DisplayApp.h"

#include "components/settings/Settings.h"
#include "components/battery/BatteryController.h"
#include "components/brightness/BrightnessController.h"
#include "components/motor/Motor.h"
#include "components/ble/BleController.h"
#include "components/ble/NimbleController.h"
#include "components/ble/NotificationManager.h"
#include "components/ble/CallNotificationManager.h"
#include "components/accelerometer/Accelerometer.h"
#include "components/fs/FS.h"

#include "drivers/Watchdog.h"
#include "drivers/Cst816s.h"
#include "drivers/St7789.h"
#include "drivers/InternalFlash.h"
#include "drivers/SpiMaster.h"
#include "drivers/SpiNorFlash.h"
#include "drivers/TwiMaster.h"

namespace Pinetime {

  namespace Drivers {
    class Cst816S;
    class SpiMaster;
    class SpiNorFlash;
    class St7789;
    class TwiMaster;
  }

  namespace System {
    class SystemTask {
      public:
        enum class Messages {PowerOFF, WakeUp, TouchWakeUp, GoToSleep, OnNewNotification, OnNewCall, BleConnected,
            BleFirmwareUpdateStarted, BleFirmwareUpdateFinished, OnTouchEvent, OnStepEvent, OnButtonEvent, OnDisplayTaskSleeping,
            ReloadIdleTimer, EnableSleeping, DisableSleeping, UpdateTimeOut, OnResourceUpdateStart, OnResourceUpdateEnd
        };

        SystemTask( Pinetime::Drivers::SpiMaster &spi, 
                    Pinetime::Drivers::St7789 &lcd,
                    Pinetime::Drivers::SpiNorFlash& spiNorFlash,
                    Pinetime::Drivers::TwiMaster& twiMaster, 
                    Pinetime::Drivers::Cst816S &touchPanel, 
                    Controllers::Accelerometer &accelerometer,
                    Components::LittleVgl &lvgl,
                    Controllers::Battery &batteryController, 
                    Controllers::Ble &bleController,
                    Controllers::DateTime &dateTimeController,
                    Controllers::Settings &settingsController
                  );


        void Start();
        void PushMessage(Messages msg);

        void OnButtonPushed();
        void OnTouchEvent();
        void OnStepEvent();
        void OnChargingEvent();
        void OnPowerPresentEvent();

        void OnIdle();
        void HardwareStatus();
        void WakeUpCheck();

        Controllers::NimbleController& nimble() {return nimbleController;};

      private:
        
        Pinetime::Drivers::SpiMaster& spi;
        Pinetime::Drivers::St7789& lcd;
        Pinetime::Drivers::SpiNorFlash& spiNorFlash;
        Pinetime::Drivers::TwiMaster& twiMaster;
        Pinetime::Drivers::Cst816S& touchPanel;
        Controllers::Accelerometer& accelerometer;
        Components::LittleVgl& lvgl;
        Controllers::Battery& batteryController;
        Controllers::Ble& bleController;
        Controllers::DateTime& dateTimeController;
        Controllers::Settings& settingsController;

        Pinetime::Drivers::Watchdog watchdog;
        Pinetime::Drivers::WatchdogView watchdogView;
        Controllers::NotificationManager notificationManager;
        Controllers::CallNotificationManager callNotificationManager;
        Pinetime::Controllers::FS fs;
        Controllers::NimbleController nimbleController;
        Pinetime::Controllers::Motor vrMotor;
        Controllers::BrightnessController brightnessController;

        QueueHandle_t systemTasksMsgQueue;

        std::unique_ptr<Applications::DisplayApp> displayApp;
        
        std::atomic<bool> isSleeping{false};
        std::atomic<bool> isGoingToSleep{false};
        std::atomic<bool> isWakingUp{false};
        
        bool isBleDiscoveryTimerRunning = false;
        uint8_t bleDiscoveryTimer = 0;

        static constexpr uint32_t hardwareTime = 10000;
        static constexpr uint32_t hardwareIdleTime = 120000;

        TaskHandle_t taskHandle;
        TimerHandle_t idleTimer;
        TimerHandle_t hardwareTimer;
        TimerHandle_t wakeUpTimer;
        bool doNotGoToSleep = false;

        void WakeUp();
        static void Process(void* instance);
        void Work();
        void ReloadIdleTimer() const;

//#if configUSE_TRACE_FACILITY == 1
//        SystemMonitor<FreeRtosMonitor> monitor;
//#else
        SystemMonitor<DummyMonitor> monitor;
//#endif
    };
  }
}
