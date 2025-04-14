/***************************************************************************//**
 * @file
 * @brief Top level application functions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/***************************************************************************//**
 * Initialize application.
 ******************************************************************************/
#include <stdio.h>
#include "sl_status.h"
#include "sl_board_control.h"
#include "sl_si70xx.h"
#include "sl_i2cspm_instances.h"
#include "sl_sleeptimer.h"
#include "app.h"


// -----------------------------------------------------------------------------
// Configuration

#define RHT_ADDRESS  SI7021_ADDR

// -----------------------------------------------------------------------------
// Private variables

static bool initialized = false;


static int32_t sensor_t=0;
static uint32_t sensor_rh=0;

// -----------------------------------------------------------------------------
// Public function definitions

sl_status_t sl_sensor_rht_init(void)
{
  sl_status_t sc;
  (void)sl_board_enable_sensor(SL_BOARD_SENSOR_RHT);
  sc = sl_si70xx_init(sl_i2cspm_sensor, RHT_ADDRESS);
  if (SL_STATUS_OK == sc) {
    initialized = true;
  } else {
    initialized = false;
  }
  return sc;
}

void sl_sensor_rht_deinit(void)
{
  (void)sl_board_disable_sensor(SL_BOARD_SENSOR_RHT);
  initialized = false;
}

sl_status_t sl_sensor_rht_get(uint32_t *rh, int32_t *t)
{
  sl_status_t sc;

  if (initialized) {
    sc = sl_si70xx_measure_rh_and_temp(sl_i2cspm_sensor, RHT_ADDRESS, rh, t);
  } else {
    sc = SL_STATUS_NOT_INITIALIZED;
  }

  return sc;
}


void app_init(void)
{
  sl_status_t sc;
  printf("Thermometer initialized\n");
  // Init temperature sensor.
  sc = sl_sensor_rht_init();
  if (sc != SL_STATUS_OK) {
    printf("Relative Humidity and Temperature sensor initialization failed.");
  }
}

/***************************************************************************//**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void)
{
  sl_status_t sc;
  sc = sl_sensor_rht_get(&sensor_rh, &sensor_t);
  if (sc == SL_STATUS_OK)
      printf("Humididy : %lu  | Temp: %ld  \n\r", sensor_rh, sensor_t);
  sl_sleeptimer_delay_millisecond(500);
}
