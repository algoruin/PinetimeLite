#include "Clock.h"

#include <date/date.h>
#include <lvgl/lvgl.h>
#include <cstdio>
#include "BatteryIcon.h"
#include "BleIcon.h"
#include "NotificationIcon.h"
#include "Symbols.h"
#include "components/battery/BatteryController.h"
#include "components/ble/BleController.h"
#include "components/ble/NotificationManager.h"
#include "../DisplayApp.h"
#include "WatchFaceDigital.h"
#include "WatchFaceAnalog.h"
#include "WatchFaceMinimal.h"
#include "WatchFacePong.h"
#include "WatchFaceCustom.h"

using namespace Pinetime::Applications::Screens;

Clock::Clock(DisplayApp* app,
        Controllers::DateTime& dateTimeController,
        Controllers::Battery& batteryController,
        Controllers::Ble& bleController,
        Controllers::NotificationManager& notificatioManager,
        Controllers::Settings &settingsController,
        Controllers::Accelerometer& accelerometer) : Screen(app),
        dateTimeController{dateTimeController}, batteryController{batteryController},
        bleController{bleController}, notificatioManager{notificatioManager},
        settingsController{settingsController},
        accelerometer{accelerometer},
        screens{app, 
          settingsController.GetClockFace(),
          {
                [this]() -> std::unique_ptr<Screen> { return WatchFaceDigitalScreen(); },
                [this]() -> std::unique_ptr<Screen> { return WatchFaceAnalogScreen(); },
                [this]() -> std::unique_ptr<Screen> { return WatchFaceMinimalScreen(); },
                [this]() -> std::unique_ptr<Screen> { return WatchFacePongScreen(); },
                //[this]() -> std::unique_ptr<Screen> { return WatchFaceCustomScreen(); }
          },
          Screens::ScreenListModes::LongPress          
        } {
          settingsController.SetAppMenu(0);
        }

Clock::~Clock() {
  lv_obj_clean(lv_scr_act());
}


bool Clock::Refresh() {  
  screens.Refresh();  
  return running;
}

bool Clock::OnTouchEvent(Pinetime::Applications::TouchEvents event) {
  return screens.OnTouchEvent(event);
}

std::unique_ptr<Screen> Clock::WatchFaceDigitalScreen() {  
  return std::unique_ptr<Screen>(new Screens::WatchFaceDigital(app, dateTimeController, batteryController, bleController, notificatioManager, settingsController, accelerometer));
}

std::unique_ptr<Screen> Clock::WatchFaceAnalogScreen() {  
  return std::unique_ptr<Screen>(new Screens::WatchFaceAnalog(app, dateTimeController, batteryController, bleController, notificatioManager, settingsController));
}

std::unique_ptr<Screen> Clock::WatchFaceMinimalScreen() {  
  return std::unique_ptr<Screen>(new Screens::WatchFaceMinimal(app, dateTimeController, batteryController, bleController, notificatioManager, settingsController));
}

std::unique_ptr<Screen> Clock::WatchFacePongScreen() {  
  return std::unique_ptr<Screen>(new Screens::WatchFacePong(app, dateTimeController, batteryController, bleController, notificatioManager, settingsController));
}

std::unique_ptr<Screen> Clock::WatchFaceCustomScreen() {  
  return std::unique_ptr<Screen>(new Screens::WatchFaceCustom(app, dateTimeController, batteryController, bleController, notificatioManager, settingsController));
}