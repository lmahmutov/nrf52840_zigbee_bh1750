/*
#define PIN_LED1 (29)
#define PIN_LED2 (31)
#define PIN_LED3 (30)
#define RED_LED (PIN_LED1)
#define GREEN_LED (PIN_LED2)
#define BLUE_LED (PIN_LED3)
#define PIN_BUTTON (2)
#define PIN_POWER_PWS (24)
#define PIN_SENS_PWS (5)
#define PIN_SERIAL_RX (28)
#define PIN_SERIAL_TX (3)
*/

#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

#define PIN_POWER_PWS  24

// LEDs definitions for CUSTOM_BOARD
#define LEDS_NUMBER    3

#define LED_1          NRF_GPIO_PIN_MAP(0,29)
#define LED_2          NRF_GPIO_PIN_MAP(0,31)
#define LED_3          NRF_GPIO_PIN_MAP(0,30)
#define LED_START      LED_1
#define LED_STOP       LED_3

#define LEDS_ACTIVE_STATE 1

#define LEDS_LIST { LED_1, LED_2, LED_3 }

#define LEDS_INV_MASK  LEDS_MASK

#define BSP_LED_0      29
#define BSP_LED_1      31
#define BSP_LED_2      30


#define BUTTONS_NUMBER 1

#define BUTTON_1       NRF_GPIO_PIN_MAP(0,2)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1}

#define BSP_BUTTON_0   BUTTON_1

#define RX_PIN_NUMBER  28
#define TX_PIN_NUMBER  3
#define HWFC           false



#ifdef __cplusplus
}
#endif

#endif // CUSTOM_BOARD_H
