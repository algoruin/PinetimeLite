#pragma once
#include <FreeRTOS.h>
#include <date/date.h>
#include <queue.h>
#include <task.h>
#include <memory>
#include "Apps.h"
#include "LittleVgl.h"
#include "TouchEvents.h"
//#include "systemtask/SystemTask.h"
#include "components/brightness/BrightnessController.h"
#include "components/firmwarevalidator/FirmwareValidator.h"
#include "components/settings/Settings.h"
#include "components/accelerometer/Accelerometer.h"
#include "screens/Screen.h"
namespace Pinetime {

  namespace Drivers {
    class St7789;
    class Cst816S;
    class WatchdogView;
    class SpiNorFlash;
  }
  
  namespace Controllers {
    class Settings;
    class Battery;
    class Ble;
    class DateTime;
    class NotificationManager;
    class CallNotificationManager;
    class FS;
  }

  namespace System {
    class SystemTask;
  }
  namespace Applications {
    class DisplayApp {
      public:
        enum class States {Idle, Running};
        enum class Messages : uint8_t {GoToSleep, GoToRunning, UpdateBleConnection, UpdateBatteryLevel, TouchEvent, StepEvent, ButtonPushed,
            NewNotification, NewCall, BleFirmwareUpdateStarted, ChargingEvent, LowBattEvent, UpdateTimeOut, ResourceUpdateStart };

        enum class FullRefreshDirections { None, Up, Down, Left, Right, LeftAnim, RightAnim };
        enum class TouchModes { Gestures, Polling };

        DisplayApp(Drivers::St7789 &lcd, Components::LittleVgl &lvgl, Drivers::Cst816S &touchPanel,
                   Controllers::Battery &batteryController, Controllers::Ble &bleController,
                   Pinetime::Drivers::SpiNorFlash& spiNorFlash,
                   Controllers::DateTime &dateTimeController, Drivers::WatchdogView &watchdog,                   
                   Controllers::Settings &settingsController,
                   Controllers::Accelerometer& accelerometer,
                   Controllers::BrightnessController& brightnessController,
                   Pinetime::System::SystemTask &systemTask,
                   Pinetime::Controllers::NotificationManager &notificationManager,
                   Pinetime::Controllers::CallNotificationManager &callNotificationManager,
                   Controllers::FS &fs);
        void Start();
        void PushMessage(Messages msg);

        void StartApp(Apps app, DisplayApp::FullRefreshDirections direction);

        void SetFullRefresh(FullRefreshDirections direction);
        void SetTouchMode(TouchModes mode);

      private:

        Pinetime::Drivers::St7789& lcd;
        Pinetime::Components::LittleVgl& lvgl;
        Pinetime::Drivers::Cst816S& touchPanel;
        Pinetime::Controllers::Battery &batteryController;
        Pinetime::Controllers::Ble &bleController;
        Pinetime::Drivers::SpiNorFlash& spiNorFlash;
        Pinetime::Controllers::DateTime& dateTimeController;
        Pinetime::Drivers::WatchdogView& watchdog;
        Pinetime::Controllers::Settings& settingsController;
        Controllers::Accelerometer& accelerometer;
        Controllers::BrightnessController& brightnessController;
        Pinetime::System::SystemTask& systemTask;
        Pinetime::Controllers::NotificationManager& notificationManager;
        Pinetime::Controllers::CallNotificationManager& callNotificationManager;
        Controllers::FS& fs;
        std::unique_ptr<Screens::Screen> currentScreen;

        Pinetime::Controllers::FirmwareValidator validator;

        TaskHandle_t taskHandle;
        States state = States::Running;
        QueueHandle_t msgQueue;
        static constexpr uint8_t queueSize = 10;
        static constexpr uint8_t itemSize = 1;

        Apps currentApp = Apps::None;

        Apps returnToApp = Apps::None;
        FullRefreshDirections returnDirection = FullRefreshDirections::None;

        TouchEvents returnTouchEvent = TouchEvents::None;
        
        TouchModes touchMode = TouchModes::Gestures;

        static void Process(void* instance);
        void InitHw();
        void Refresh();
        void RunningState();
        void IdleState();
        TouchEvents OnTouchEvent();    

        void returnApp(Apps app, DisplayApp::FullRefreshDirections direction, TouchEvents touchEvent);
                
    };
  }
}


