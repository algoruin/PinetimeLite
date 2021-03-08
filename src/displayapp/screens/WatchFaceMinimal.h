#pragma once

#include <chrono>
#include <cstdint>
#include <memory>
#include <lvgl/lvgl.h>
#include "Screen.h"
#include "ScreenList.h"
#include "components/datetime/DateTimeController.h"
#include "components/battery/BatteryController.h"
#include "components/ble/BleController.h"
#include "components/ble/NotificationManager.h"

namespace Pinetime {
  namespace Controllers {
    class Settings;
    class Battery;
    class Ble;
    class NotificationManager;
  }
  namespace Applications {
    namespace Screens {

      class WatchFaceMinimal : public Screen {
        public:
          WatchFaceMinimal(DisplayApp* app,
                  Controllers::DateTime& dateTimeController,
                  Controllers::Battery& batteryController,
                  Controllers::Ble& bleController,
                  Controllers::NotificationManager& notificatioManager,
                  Controllers::Settings &settingsController);
          
          ~WatchFaceMinimal() override;

          bool Refresh() override;
          void UpdateScreen();

        private:
          uint8_t sHour, sMinute, sSecond;
          Pinetime::Controllers::DateTime::Months month;
          uint8_t day;
          Pinetime::Controllers::DateTime::Days dayOfWeek;

          uint8_t hour;
          uint8_t minute;
          uint8_t second;

          Pinetime::Controllers::DateTime::Months currentMonth = Pinetime::Controllers::DateTime::Months::Unknown;
          Pinetime::Controllers::DateTime::Days currentDayOfWeek = Pinetime::Controllers::DateTime::Days::Unknown;
          uint8_t currentDay = 0;

          lv_obj_t* label_time;
          lv_obj_t* label_time_min;
          lv_obj_t* seconds;
          lv_obj_t* label_date;
          lv_obj_t* notificationIcon;
          lv_obj_t* batteryIcon;

          lv_task_t* taskUpdate;

          Controllers::DateTime& dateTimeController;
          Controllers::Battery& batteryController;
          Controllers::Ble& bleController;
          Controllers::NotificationManager& notificatioManager;
          Controllers::Settings& settingsController;
      };
    }
  }
}