#include "pico/stdlib.h"
#include "pico/util/datetime.h"
#include <stdio.h>

#include "hardware/gpio.h"
#include "hardware/i2c.h"
#include "hardware/pio.h"
#include "hardware/rtc.h"

#include <stdlib.h>

#include "FreeRTOS.h"
#include "semphr.h"
#include "task.h"

#include "gps_task.h"

int main() {
  stdio_init_all();

  init_gps();

  vTaskStartScheduler();
}
