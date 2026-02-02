/*
 * @file esp32_board_pin.h
 * @brief GPIO definitions for ESP32. The following macros define the GPIO pins
 *        available on the ESP32.
 *
 * @note  Header for the ESP32 Development Board 2.4GHz Dual Mode Wifi + BL 4.2 Dual Core
 * @note  Only use the define pins as other GPIOs are tied to CPU functions that will
 *        interfere with normal operation.
 *
 * @author Aeron Lahoylahoy
 * @date  Febrarury 1, 2026
 */
#include "soc/gpio_reg.h"
#include "soc/io_mux_reg.h"
#include "driver/periph_ctrl.h"

#ifndef GPIO_H_
#define GPIO_H_

// --------- UART Pins -----------
#define PIN_UART_TX     GPIO_NUM_1 // UART TX for booting/flashing DO NOT USE UNLESS YOU KNOW WHAT YOU ARE DOING
#define PIN_UART_RX     GPIO_NUM_3 // UART Rx for booting/flashing DO NOT USE UNLESS YOU KNOW WHAT YOU ARE DOING

// --------- SPI Pins ------------
#define PIN_HSPI_MISO   GPIO_NUM_12 // HSPI Master In Slave Out. Why Q? Look into this further.
#define PIN_HSPI_MOSI   GPIO_NUM_13 // HSPI Master Out Slave In. Why D? Look into this further.
#define PIN_HSPI_CLK    GPIO_NUM_14
#define PIN_HSPI_CS     GPIO_NUM_15
#define PIN_HSPI_WP     GPIO_NUM_2
#define PIN_HSPI_HD     GPIO_NUM_4

#define PIN_VSPI_MOSI   GPIO_NUM_23 // Look into this further. VSPID?
#define PIN_VSPI_MISO   GPIO_NUM_19
#define PIN_VSPI_CLK    GPIO_NUM_18
#define PIN_VSPI_CS     GPIO_NUM_5
#define PIN_VSPI_WP     GPIO_NUM_22 // SPI Write Protect?
#define PIN_VSPI_HD     GPIO_NUM_21 // Look into this further what is this? On the pinout image it shows as "VSIHD"?

// --------- I2C Pins ------------
#define PIN_I2C_SDA     GPIO_NUM_21
#define PIN_I2C_SCL     GPIO_NUM_22

// --------- ADC Pins -------------
#define PIN_ADC0        GPIO_NUM_36
#define PIN_ADC3        GPIO_NUM_39
#define PIN_ADC4        GPIO_NUM_32
#define PIN_ADC5        GPIO_NUM_33
#define PIN_ADC6        GPIO_NUM_34
#define PIN_ADC7        GPIO_NUM_35
#define PIN_ADC10       GPIO_NUM_4
#define PIN_ADC12       GPIO_NUM_2
#define PIN_ADC13       GPIO_NUM_15 
#define PIN_ADC14       GPIO_NUM_13
#define PIN_ADC15       GPIO_NUM_12
#define PIN_ADC16       GPIO_NUM_14
#define PIN_ADC17       GPIO_NUM_27
#define PIN_ADC18       GPIO_NUM_25
#define PIN_ADC19       GPIO_NUM_26

// --------- DAC Pins -------------
#define PIN_DAC1        GPIO_NUM_25
#define PIN_DAC2        GPIO_NUM_26

// --------- TOUCH Pins -----------
#define PIN_TOUCH0      GPIO_NUM_4
#define PIN_TOUCH2      GPIO_NUM_2
#define PIN_TOUCH5      GPIO_NUM_12
#define PIN_TOUCH6      GPIO_NUM_14
#define PIN_TOUCH7      GPIO_NUM_27
#define PIN_TOUCH8      GPIO_NUM_33
#define PIN_TOUCH9      GPIO_NUM_32

// --------- Sensor Pins ----------
#define PIN_SENSOR_VP   GPIO_NUM_36
#define PIN_SENSOR_VN   GPIO_NUM_39

// --------- HSI Pins -------------
#define PIN_HS2_DATA0   GPIO_NUM_2
#define PIN_HS2_DATA1   GPIO_NUM_4
#define PIN_HS2_DATA2   GPIO_NUM_12
#define PIN_HS1_DATA4   GPIO_NUM_16
#define PIN_HS1_DATA5   GPIO_NUM_17
#define PIN_HS1_DATA6   GPIO_NUM_5
#define PIN_HS1_DATA7   GPIO_NUM_18

#define PIN_HS2_CLK     GPIO_NUM_14
#define PIN_HS2_CMND    GPIO_NUM_15
#define PIN_HS1_STROBE  GPIO_NUM_23

// --------- GPIO Pins ------------
// #define PIN_GPIO1      GPIO_NUM_1 // Used for UART TX DO NOT USE UNLESS YOU KNOW WHAT YOU ARE DOING
#define PIN_GPIO2       GPIO_NUM_2
// #define PIN_GPIO3      GPIO_NUM_3 // Used for UART RX DO NOT USE UNLESS
#define PIN_GPIO4       GPIO_NUM_4
#define PIN_GPIO5       GPIO_NUM_5
#define PIN_GPIO12      GPIO_NUM_12
#define PIN_GPIO13      GPIO_NUM_13
#define PIN_GPIO14      GPIO_NUM_14
#define PIN_GPIO15      GPIO_NUM_15
#define PIN_GPIO16      GPIO_NUM_16
#define PIN_GPIO17      GPIO_NUM_17
#define PIN_GPIO18      GPIO_NUM_18
#define PIN_GPIO19      GPIO_NUM_19
#define PIN_GPIO21      GPIO_NUM_21
#define PIN_GPIO22      GPIO_NUM_22
#define PIN_GPIO23      GPIO_NUM_23
#define PIN_GPIO25      GPIO_NUM_25
#define PIN_GPIO26      GPIO_NUM_26
#define PIN_GPIO27      GPIO_NUM_27
#define PIN_GPIO32      GPIO_NUM_32
#define PIN_GPIO33      GPIO_NUM_33
#define PIN_GPIO34      GPIO_NUM_34
#define PIN_GPIO35      GPIO_NUM_35
#define PIN_GPIO36      GPIO_NUM_36
#define PIN_GPIO39      GPIO_NUM_39

// --------- Reserved Pins --------
// #define PIN6 GPIO_NUM_6
// #define PIN7 GPIO_NUM_7
// #define PIN8 GPIO_NUM_8
// #define PIN9 GPIO_NUM_9
// #define PIN10 GPIO_NUM_10
// #define PIN11 GPIO_NUM_11
// #define PIN37 GPIO_NUM_37
// #define PIN38 GPIO_NUM_38

/* Ports */
// The ESP32 has a no fixed ports and will only reference the GPIO pin numbers directly.

#endif /* GPIO_H_ */