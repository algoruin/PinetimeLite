#include <libs/lvgl/lvgl.h>
#include "WatchFaceDigital.h"
#include "BatteryIcon.h"
#include "BleIcon.h"
#include "Symbols.h"
#include "NotificationIcon.h"

using namespace Pinetime::Applications::Screens;

WatchFaceDigital::WatchFaceDigital(Pinetime::Applications::DisplayApp *app,
                  Controllers::DateTime& dateTimeController,
                  Controllers::Battery& batteryController,
                  Controllers::Ble& bleController,
                  Controllers::NotificationManager& notificatioManager,
                  Controllers::Settings &settingsController,
                  Controllers::Accelerometer& accelerometer
                  ) : Screen(app), 
                  currentDateTime{{}},
                  dateTimeController{dateTimeController}, batteryController{batteryController},
                  bleController{bleController}, notificatioManager{notificatioManager},
                  settingsController{settingsController},
                  accelerometer{accelerometer}
{
  settingsController.SetClockFace(0);
  settingsController.SaveSettings();
  
  uint16_t year = dateTimeController.Year();
  uint8_t day = dateTimeController.Day();

  uint8_t hour = dateTimeController.Hours();
  uint8_t minute = dateTimeController.Minutes();
  uint8_t second = dateTimeController.Seconds();

  sHour = hour;
  sMinute = minute;
  sSecond = second;

  seconds_point[0].x = 0;
  seconds_point[0].y = 162;
  seconds_point[1].x = 240 * sSecond / 59;
  seconds_point[1].y = 162;

  //auto batteryPercent = static_cast<uint8_t>(batteryController.PercentRemaining());

  // Set the background to Black
  //lv_obj_set_style_local_bg_color(lv_scr_act(), LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0, 0, 0));

  // Step Container
  lv_style_init(&stepc_style);
  //lv_style_set_bg_color(&stepc_style, LV_STATE_DEFAULT, lv_color_hex(0x00655B));
  lv_style_set_bg_opa(&stepc_style, LV_STATE_DEFAULT, LV_OPA_0);
  lv_style_set_border_width(&stepc_style, LV_STATE_DEFAULT, 0);
  lv_style_set_radius(&stepc_style, LV_STATE_DEFAULT, 0);
  lv_style_set_pad_all(&stepc_style, LV_STATE_DEFAULT, 2);
  lv_style_set_pad_inner(&stepc_style, LV_STATE_DEFAULT, 2);

  lv_obj_t * stepc_cont = lv_cont_create(lv_scr_act(), NULL);
  lv_obj_add_style(stepc_cont, LV_CONT_PART_MAIN, &stepc_style);
  lv_cont_set_layout(stepc_cont, LV_LAYOUT_CENTER);
  lv_obj_set_pos(stepc_cont, 16, 185);
  lv_obj_set_width(stepc_cont, 60);
  lv_obj_set_height(stepc_cont, 50);

  // Info Container
  lv_style_init(&infoc_style);
  //lv_style_set_bg_color(&infoc_style, LV_STATE_DEFAULT, lv_color_hex(0xAC4C14));
  lv_style_set_bg_opa(&infoc_style, LV_STATE_DEFAULT, LV_OPA_0);
  lv_style_set_border_width(&infoc_style, LV_STATE_DEFAULT, 0);
  lv_style_set_radius(&infoc_style, LV_STATE_DEFAULT, 0);
  lv_style_set_pad_all(&infoc_style, LV_STATE_DEFAULT, 2);
  lv_style_set_pad_inner(&infoc_style, LV_STATE_DEFAULT, 2);

  lv_obj_t * infoc_cont = lv_cont_create(lv_scr_act(), NULL);  
  lv_obj_add_style(infoc_cont, LV_CONT_PART_MAIN, &infoc_style);
  lv_cont_set_layout(infoc_cont, LV_LAYOUT_CENTER);
  lv_obj_set_pos(infoc_cont, 90, 185);
  lv_obj_set_width(infoc_cont, 60);
  lv_obj_set_height(infoc_cont, 50);

  // Power Container
  lv_style_init(&powerc_style);
  //lv_style_set_bg_color(&powerc_style, LV_STATE_DEFAULT, lv_color_hex(0x505A51));
  lv_style_set_bg_opa(&powerc_style, LV_STATE_DEFAULT, LV_OPA_0);
  lv_style_set_border_width(&powerc_style, LV_STATE_DEFAULT, 0);
  lv_style_set_radius(&powerc_style, LV_STATE_DEFAULT, 0);
  lv_style_set_pad_all(&powerc_style, LV_STATE_DEFAULT, 2);
  lv_style_set_pad_inner(&powerc_style, LV_STATE_DEFAULT, 2);

  lv_obj_t * powerc_cont = lv_cont_create(lv_scr_act(), NULL);  
  lv_obj_add_style(powerc_cont, LV_CONT_PART_MAIN, &powerc_style);
  lv_cont_set_layout(powerc_cont, LV_LAYOUT_CENTER);
  lv_obj_set_pos(powerc_cont, 164, 185);
  lv_obj_set_width(powerc_cont, 60);
  lv_obj_set_height(powerc_cont, 50);

  /*
  // Heart Container
  lv_style_init(&heartc_style);
  //lv_style_set_bg_color(&heartc_style, LV_STATE_DEFAULT, lv_color_hex(0xB20048));
  lv_style_set_bg_opa(&heartc_style, LV_STATE_DEFAULT, LV_OPA_0);
  lv_style_set_border_width(&heartc_style, LV_STATE_DEFAULT, 0);
  lv_style_set_radius(&heartc_style, LV_STATE_DEFAULT, 0);
  lv_style_set_pad_all(&heartc_style, LV_STATE_DEFAULT, 2);
  lv_style_set_pad_inner(&heartc_style, LV_STATE_DEFAULT, 2);

  lv_obj_t * heartc_cont = lv_cont_create(lv_scr_act(), NULL);  
  lv_obj_add_style(heartc_cont, LV_CONT_PART_MAIN, &heartc_style);
  lv_cont_set_layout(heartc_cont, LV_LAYOUT_CENTER);
  lv_obj_set_pos(heartc_cont, 180, 185);
  lv_obj_set_width(heartc_cont, 60);
  lv_obj_set_height(heartc_cont, 50);
  */  

  // Time Container
  lv_style_init(&timec_style);
  lv_style_set_bg_color(&timec_style, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
  lv_style_set_border_width(&timec_style, LV_STATE_DEFAULT, 0);
  lv_style_set_radius(&timec_style, LV_STATE_DEFAULT, 0);
  lv_style_set_pad_all(&timec_style, LV_STATE_DEFAULT, 6);
  lv_style_set_pad_top(&timec_style, LV_STATE_DEFAULT, 8);
  lv_style_set_pad_inner(&timec_style, LV_STATE_DEFAULT, 4);

  lv_obj_t * timec_cont = lv_cont_create(lv_scr_act(), NULL);  
  lv_obj_add_style(timec_cont, LV_CONT_PART_MAIN, &timec_style);
  lv_cont_set_layout(timec_cont, LV_LAYOUT_PRETTY_MID);
  lv_obj_set_pos(timec_cont, 0, 75);
  lv_obj_set_width(timec_cont, 240);
  lv_obj_set_height(timec_cont, 90);


  // Date Container
  lv_style_init(&datec_style);
  lv_style_set_bg_opa(&datec_style, LV_STATE_DEFAULT, LV_OPA_0);
  lv_style_set_border_width(&datec_style, LV_STATE_DEFAULT, 0);
  lv_style_set_radius(&datec_style, LV_STATE_DEFAULT, 0);
  lv_style_set_pad_all(&datec_style, LV_STATE_DEFAULT, 6);
  lv_style_set_pad_top(&datec_style, LV_STATE_DEFAULT, 4);
  lv_style_set_pad_inner(&datec_style, LV_STATE_DEFAULT, 4);

  lv_obj_t * date1c_cont = lv_cont_create(lv_scr_act(), NULL);  
  lv_obj_add_style(date1c_cont, LV_CONT_PART_MAIN, &datec_style);
  lv_cont_set_layout(date1c_cont, LV_LAYOUT_COLUMN_MID);
  lv_obj_set_pos(date1c_cont, 0, 0);
  lv_obj_set_width(date1c_cont, 120);
  lv_obj_set_height(date1c_cont, 70);

  lv_obj_t * date2c_cont = lv_cont_create(lv_scr_act(), NULL);  
  lv_obj_add_style(date2c_cont, LV_CONT_PART_MAIN, &datec_style);
  lv_cont_set_layout(date2c_cont, LV_LAYOUT_PRETTY_MID);
  lv_obj_set_pos(date2c_cont, 120, 0);
  lv_obj_set_width(date2c_cont, 120);
  lv_obj_set_height(date2c_cont, 70);


  // Hour and Minute --------------------------------------------------------------------------------------
  lv_style_init(&time_style);
  lv_style_set_text_font(&time_style, LV_STATE_DEFAULT, &lv_font_clock_90);
  lv_style_set_text_color(&time_style, LV_STATE_DEFAULT, lv_color_hex(0x000000));

  label_time = lv_label_create(timec_cont, NULL);
  lv_obj_add_style(label_time, LV_LABEL_PART_MAIN, &time_style);
  lv_label_set_text_fmt(label_time,  "%02i:%02i", sHour, sMinute);
  lv_label_set_align( label_time, LV_LABEL_ALIGN_CENTER );    
  //lv_obj_align(label_time, lv_scr_act(), LV_ALIGN_CENTER, 0, 0);


  // Seconds ---------------------------------------------------------------------------------------------
  lv_style_init(&seconds_style);
  lv_style_set_text_font(&seconds_style, LV_STATE_DEFAULT, &lv_font_clock_42);
  label_time_sec = lv_label_create(timec_cont, NULL);
  
  lv_style_set_text_color(&seconds_style, LV_STATE_DEFAULT, lv_color_hex(0x444444));  
  lv_obj_add_style(label_time_sec, LV_LABEL_PART_MAIN, &seconds_style);
  lv_label_set_text_fmt(label_time_sec,  "%02i", sSecond);
  lv_label_set_align( label_time_sec, LV_LABEL_ALIGN_CENTER );
  //lv_obj_align(label_time_sec, label_time, LV_ALIGN_OUT_RIGHT_MID, 5, 0);

  // Seconds line ---------------------------------------------------------------------------------------
  lv_style_init(&seconds_line_style);

  seconds_body = lv_line_create(lv_scr_act(), NULL);
  lv_style_set_line_width(&seconds_line_style, LV_STATE_DEFAULT, 5);
  lv_style_set_line_color(&seconds_line_style, LV_STATE_DEFAULT, lv_color_hex(0x0094FF));
  lv_style_set_line_rounded(&seconds_line_style, LV_STATE_DEFAULT, false);
  lv_obj_add_style(seconds_body, LV_LINE_PART_MAIN, &seconds_line_style);

  lv_line_set_points(seconds_body, seconds_point, 2);


  // Month ---------------------------------------------------------------------------------------------
  lv_style_init(&datemonth_style);
  lv_style_set_text_color(&datemonth_style, LV_STATE_DEFAULT, lv_color_hex(0x3077B9)); 
  label_date_month = lv_label_create(date2c_cont, nullptr);  
  lv_obj_add_style(label_date_month, LV_LABEL_PART_MAIN, &datemonth_style);
  lv_label_set_text(label_date_month, dateTimeController.MonthToStringLow());
  //lv_label_set_align( label_date_month, LV_LABEL_ALIGN_CENTER);
  //lv_obj_align(label_date_month, nullptr, LV_ALIGN_IN_TOP_RIGHT, 0, 5);

  // Year ----------------------------------------------------------------------------------------------
  lv_style_init(&dateyear_style);
  lv_style_set_text_color(&dateyear_style, LV_STATE_DEFAULT, lv_color_hex(0x444444));   
  lv_style_set_text_font(&dateyear_style, LV_STATE_DEFAULT, &lv_font_clock_42);   

  label_date_year = lv_label_create(date2c_cont, nullptr);  
  lv_obj_add_style(label_date_year, LV_LABEL_PART_MAIN, &dateyear_style);
  lv_label_set_text_fmt(label_date_year, "%04i", year);
  //lv_label_set_align( label_date_year, LV_LABEL_ALIGN_CENTER);
  //lv_obj_align(label_date_year, label_date_month, LV_ALIGN_CENTER, 0, 30);

  // Day of week ---------------------------------------------------------------------------------------
  lv_style_init(&dateday_style);
  lv_style_set_text_color(&dateday_style, LV_STATE_DEFAULT, lv_color_hex(0xFFE600)); 
  label_date = lv_label_create(date1c_cont, nullptr);
  //lv_obj_set_width(date1c_cont, 120);
  lv_obj_add_style(label_date, LV_LABEL_PART_MAIN, &dateday_style);
  lv_label_set_text(label_date, dateTimeController.DayOfWeekToStringLow());
  //lv_label_set_align( label_date, LV_LABEL_ALIGN_CENTER);
  //lv_obj_align(label_date, nullptr, LV_ALIGN_IN_TOP_LEFT, 0, 5);

  // Day -----------------------------------------------------------------------------------------------
  lv_style_init(&date_style);
  lv_style_set_text_color(&date_style, LV_STATE_DEFAULT, lv_color_hex(0xCE1B1B));   
  lv_style_set_text_font(&date_style, LV_STATE_DEFAULT, &lv_font_clock_42); 

  label_date_day = lv_label_create(date1c_cont, nullptr);
  //lv_obj_set_width(label_date_day, 120);
  lv_obj_add_style(label_date_day, LV_LABEL_PART_MAIN, &date_style);
  lv_label_set_text_fmt(label_date_day,  "%02i", day);
  //lv_label_set_align( label_date_day, LV_LABEL_ALIGN_CENTER);
  //lv_obj_align(label_date_day, label_date, LV_ALIGN_CENTER, 0, 30);


  // Battery -----------------------------------------------------------------------------------------------

  batteryIcon = lv_label_create(powerc_cont, nullptr);
  lv_obj_set_style_local_text_color(batteryIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
  lv_obj_set_style_local_text_font(batteryIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_sys_20);
  lv_label_set_text(batteryIcon, Symbols::batteryHalf);
  //lv_obj_align(batteryIcon, lv_scr_act(), LV_ALIGN_IN_TOP_RIGHT, -5, 2);

  batteryValue = lv_label_create(powerc_cont, NULL);
  lv_obj_set_style_local_text_color(batteryValue, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
  lv_label_set_text_static(batteryValue,  "--%");

  /*batteryPlug = lv_label_create(powerc_cont, nullptr);
  lv_obj_add_style(powerc_cont, LV_LABEL_PART_MAIN, &batt_style);
  lv_label_set_text(batteryPlug, Symbols::plug);*/
  //lv_obj_align(batteryPlug, batteryIcon, LV_ALIGN_OUT_LEFT_MID, -5, 0);
  
  // Bluetooth -----------------------------------------------------------------------------------------------
  bleIcon = lv_label_create(infoc_cont, nullptr);
  lv_obj_set_style_local_text_color(bleIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x2B2B2B));
  lv_obj_set_style_local_text_font(bleIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_sys_20);
  lv_label_set_text(bleIcon, Symbols::bluetooth);
  //lv_obj_align(bleIcon, nullptr, LV_ALIGN_IN_TOP_LEFT, 40, 0);

  // Notification --------------------------------------------------------------------------------------------
  notificationIcon = lv_label_create(infoc_cont, NULL);
  lv_obj_set_style_local_text_color(notificationIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x2B2B2B));
  lv_obj_set_style_local_text_font(notificationIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_sys_20);
  lv_label_set_text(notificationIcon, NotificationIcon::GetIcon(true));
  //lv_obj_align(notificationIcon, nullptr, LV_ALIGN_IN_TOP_LEFT, 10, 0);  

  /*
  // Heart rate -----------------------------------------------------------------------------------------------
  lv_style_init(&heart_style);
  lv_style_set_text_color(&heart_style, LV_STATE_DEFAULT, lv_color_hex(0xCE1B1B));    

  heartbeatIcon = lv_label_create(heartc_cont, nullptr);
  lv_obj_add_style(heartbeatIcon, LV_LABEL_PART_MAIN, &heart_style);
  lv_label_set_text(heartbeatIcon, Symbols::heartBeat);
  //lv_obj_align(heartbeatIcon, lv_scr_act(), LV_ALIGN_IN_BOTTOM_RIGHT, -50, -2);

  heartbeatValue = lv_label_create(heartc_cont, nullptr);
  lv_obj_add_style(heartbeatValue, LV_LABEL_PART_MAIN, &heart_style);
  if ( settingsController.GetHeartRate() == 0 )
    lv_label_set_text(heartbeatValue, "--");
  else
    lv_label_set_text_fmt(heartbeatValue, "%02i", settingsController.GetHeartRate());

  //lv_obj_align(heartbeatValue, heartbeatIcon, LV_ALIGN_OUT_RIGHT_MID, 5, 0);
  */

  // Steps -----------------------------------------------------------------------------------------------   
  stepIcon = lv_label_create(stepc_cont, nullptr);
  lv_obj_set_style_local_text_color(stepIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x00FFE7));
  lv_obj_set_style_local_text_font(stepIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_sys_20);
  lv_label_set_text(stepIcon, Symbols::shoe);
  //lv_obj_align(stepIcon, lv_scr_act(), LV_ALIGN_IN_BOTTOM_LEFT, 5, -2);

  stepValue = lv_label_create(stepc_cont, nullptr);  
  lv_obj_set_style_local_text_color(stepValue, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x00FFE7));
  lv_label_set_text_fmt(stepValue, "%lu", stepCount.Get());
  //lv_obj_align(stepValue, stepIcon, LV_ALIGN_OUT_RIGHT_MID, 5, 0);


  // -----------------------------------------------------------------------------------------------
  lv_obj_t * backgroundLabel = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_long_mode(backgroundLabel, LV_LABEL_LONG_CROP);
  lv_obj_set_size(backgroundLabel, 240, 240);
  lv_obj_set_pos(backgroundLabel, 0, 0);
  lv_label_set_text_static(backgroundLabel, "");

}

WatchFaceDigital::~WatchFaceDigital() {

  lv_style_reset(&stepc_style);
  lv_style_reset(&infoc_style);
  lv_style_reset(&powerc_style);
  lv_style_reset(&timec_style);
  lv_style_reset(&datec_style);
  lv_style_reset(&time_style);
  lv_style_reset(&seconds_style);
  lv_style_reset(&seconds_line_style);
  lv_style_reset(&dateyear_style);
  lv_style_reset(&dateday_style);
  lv_style_reset(&datemonth_style);
  lv_style_reset(&date_style);

  lv_obj_clean(lv_scr_act());
}



bool WatchFaceDigital::Refresh() {

  batteryPercentRemaining = batteryController.PercentRemaining();
  if (batteryPercentRemaining.IsUpdated()) {
    auto batteryPercent = batteryPercentRemaining.Get();
    if ( batteryPercent == -1 ) {
      lv_label_set_text_static(batteryValue,  "--%");
    } else {
      lv_label_set_text_fmt(batteryValue,  "%d%%", (int) batteryPercent);
    }
    lv_label_set_text(batteryIcon, BatteryIcon::GetBatteryIcon(batteryPercent));
  }

  if (batteryController.IsCharging() /*|| batteryController.IsPowerPresent()*/) {
    lv_label_set_text(batteryIcon, BatteryIcon::GetPlugIcon(true));
  }
  
  //bleState = bleController.IsConnected();
  //if (bleState.IsUpdated()) {
    if(bleController.IsConnected()) {
      lv_obj_set_style_local_text_color(bleIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x0000FF));  
    } else { 
      lv_obj_set_style_local_text_color(bleIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x2B2B2B));
    }
  //}

  /*lv_obj_align(batteryIcon, lv_scr_act(), LV_ALIGN_IN_TOP_RIGHT, -5, 5);
  lv_obj_align(batteryPlug, batteryIcon, LV_ALIGN_OUT_LEFT_MID, -5, 0);
  lv_obj_align(bleIcon, batteryPlug, LV_ALIGN_OUT_LEFT_MID, -5, 0);*/

  //notificationState = notificatioManager.AreNewNotificationsAvailable();

  //if(notificationState.IsUpdated()) {
    if(notificatioManager.AreNewNotificationsAvailable())
      lv_obj_set_style_local_text_color(notificationIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x097500));  
    else
      lv_obj_set_style_local_text_color(notificationIcon, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex(0x2B2B2B));  
  //}

  currentDateTime = dateTimeController.CurrentDateTime();

  if(currentDateTime.IsUpdated()) {

    uint16_t year = dateTimeController.Year();
    auto month = dateTimeController.Month();
    uint8_t day = dateTimeController.Day();
    auto dayOfWeek = dateTimeController.DayOfWeek();

    uint8_t hour = dateTimeController.Hours();
    uint8_t minute = dateTimeController.Minutes();
    uint8_t second = dateTimeController.Seconds();

    if(sHour != hour || sMinute != minute || sSecond != second) {
      sHour = hour;
      sMinute = minute;
      sSecond = second;
      lv_label_set_text_fmt(label_time,  "%02i:%02i", sHour, sMinute);
      lv_label_set_text_fmt(label_time_sec,  "%02i", sSecond);

      seconds_point[1].x = 240 * sSecond / 59;
      lv_line_set_points(seconds_body, seconds_point, 2);

    }
  
    if ((year != currentYear) || (month != currentMonth) || (dayOfWeek != currentDayOfWeek) || (day != currentDay)) {

      lv_label_set_text_fmt(label_date_year, "%04i", year);
      lv_label_set_text(label_date_month, dateTimeController.MonthToStringLow());
      lv_label_set_text(label_date, dateTimeController.DayOfWeekToStringLow());
      lv_label_set_text_fmt(label_date_day,  "%02i", day);

      currentYear = year;
      currentMonth = month;
      currentDayOfWeek = dayOfWeek;
      currentDay = day;
    }
  }

  // TODO heartbeat = heartBeatController.GetValue();
  /*if(heartbeat.IsUpdated()) {    
    lv_label_set_text_fmt(heartbeatValue, "%d", heartbeat.Get());
    //lv_obj_align(heartbeatIcon, lv_scr_act(), LV_ALIGN_IN_BOTTOM_LEFT, 5, -2);
    //lv_obj_align(heartbeatValue, heartbeatIcon, LV_ALIGN_OUT_RIGHT_MID, 5, 0);
    //lv_obj_align(heartbeatBpm, heartbeatValue, LV_ALIGN_OUT_RIGHT_MID, 5, 0);
  }*/

  stepCount = accelerometer.GetSteps();
  if(stepCount.IsUpdated()) {        
    lv_label_set_text_fmt(stepValue, "%lu", stepCount.Get());
    //lv_obj_align(stepValue, lv_scr_act(), LV_ALIGN_IN_BOTTOM_RIGHT, -5, -2);
    //lv_obj_align(stepIcon, stepValue, LV_ALIGN_OUT_LEFT_MID, -5, 0);
  }

  //return running;
  return true;
}