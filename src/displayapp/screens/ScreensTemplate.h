#pragma once

#include <cstdint>
#include <lvgl/lvgl.h>
#include "Screen.h"

namespace Pinetime {

  namespace Applications {
    namespace Screens {

      class ScreensTemplate : public Screen{
        public:
          ScreensTemplate(DisplayApp* app, const char* name);
          ~ScreensTemplate() override;

          bool Refresh() override;
         
        private:          

          lv_obj_t* llabel;

      };
    }
  }
}
