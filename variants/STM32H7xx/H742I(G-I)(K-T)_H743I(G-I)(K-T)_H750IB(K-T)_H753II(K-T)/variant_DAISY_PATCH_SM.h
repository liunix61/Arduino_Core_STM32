/*
 *******************************************************************************
 * Copyright (c) 2020-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
#define PA0                     PIN_A9
#define PA1                     PIN_A8
#define PA2                     PIN_A2
#define PA3                     PIN_A0
#define PA4                     PIN_A12
#define PA5                     PIN_A13
#define PA6                     PIN_A1
#define PA7                     PIN_A3
#define PA9                     8
#define PA10                    9
#define PA11                    10
#define PA12                    11
#define PA13                    12
#define PA14                    13
#define PA15                    14
#define PB1                     PIN_A6
#define PB3                     16
#define PB4                     17
#define PB8                     18
#define PB9                     19
#define PB10                    20
#define PB11                    21
#define PB14                    22
#define PB15                    23
#define PC0                     PIN_A5
#define PC1                     PIN_A4
#define PC4                     PIN_A7
#define PC7                     27
#define PC8                     28
#define PC9                     29
#define PC10                    30
#define PC11                    31
#define PC12                    32
#define PC13                    33
#define PC14                    34
#define PD0                     35
#define PD1                     36
#define PD2                     37
#define PD3                     38
#define PD8                     39
#define PD9                     40
#define PD10                    41
#define PD14                    42
#define PD15                    43
#define PE0                     44
#define PE1                     45
#define PE2                     46
#define PE3                     47
#define PE4                     48
#define PE5                     49
#define PE6                     50
#define PE7                     51
#define PE8                     52
#define PE9                     53
#define PE10                    54
#define PE11                    55
#define PE12                    56
#define PE13                    57
#define PE14                    58
#define PE15                    59
#define PF0                     60
#define PF1                     61
#define PF2                     62
#define PF3                     63
#define PF4                     64
#define PF5                     65
#define PF6                     66
#define PF7                     67
#define PF8                     68
#define PF9                     69
#define PF10                    70
#define PF11                    71
#define PF12                    72
#define PF13                    73
#define PF14                    74
#define PF15                    75
#define PG0                     76
#define PG1                     77
#define PG2                     78
#define PG3                     79
#define PG4                     80
#define PG5                     81
#define PG6                     82
#define PG8                     83
#define PG13                    84
#define PG14                    85
#define PG15                    86
#define PH0                     87
#define PH1                     88
#define PH2                     89
#define PH3                     90
#define PH5                     91
#define PH8                     92
#define PH9                     93
#define PH10                    94
#define PH11                    95
#define PH12                    96
#define PH13                    97
#define PH14                    98
#define PH15                    99
#define PI0                     100
#define PI1                     101
#define PI2                     102
#define PI3                     103
#define PI4                     104
#define PI5                     105
#define PI6                     106
#define PI7                     107
#define PI9                     108
#define PI10                    109
#define PC2_C                   PIN_A11
#define PC3_C                   PIN_A10

// Alternate pins number
#define PA0_ALT1                (PA0  | ALT1)
#define PA1_ALT1                (PA1  | ALT1)
#define PA1_ALT2                (PA1  | ALT2)
#define PA2_ALT1                (PA2  | ALT1)
#define PA2_ALT2                (PA2  | ALT2)
#define PA3_ALT1                (PA3  | ALT1)
#define PA3_ALT2                (PA3  | ALT2)
#define PA4_ALT1                (PA4  | ALT1)
#define PA4_ALT2                (PA4  | ALT2)
#define PA5_ALT1                (PA5  | ALT1)
#define PA6_ALT1                (PA6  | ALT1)
#define PA7_ALT1                (PA7  | ALT1)
#define PA7_ALT2                (PA7  | ALT2)
#define PA7_ALT3                (PA7  | ALT3)
#define PA9_ALT1                (PA9  | ALT1)
#define PA10_ALT1               (PA10 | ALT1)
#define PA11_ALT1               (PA11 | ALT1)
#define PA12_ALT1               (PA12 | ALT1)
#define PA15_ALT1               (PA15 | ALT1)
#define PA15_ALT2               (PA15 | ALT2)
#define PB1_ALT1                (PB1  | ALT1)
#define PB1_ALT2                (PB1  | ALT2)
#define PB3_ALT1                (PB3  | ALT1)
#define PB3_ALT2                (PB3  | ALT2)
#define PB4_ALT1                (PB4  | ALT1)
#define PB4_ALT2                (PB4  | ALT2)
#define PB8_ALT1                (PB8  | ALT1)
#define PB8_ALT2                (PB8  | ALT2)
#define PB9_ALT1                (PB9  | ALT1)
#define PB9_ALT2                (PB9  | ALT2)
#define PB14_ALT1               (PB14 | ALT1)
#define PB14_ALT2               (PB14 | ALT2)
#define PB15_ALT1               (PB15 | ALT1)
#define PB15_ALT2               (PB15 | ALT2)
#define PC0_ALT1                (PC0  | ALT1)
#define PC0_ALT2                (PC0  | ALT2)
#define PC1_ALT1                (PC1  | ALT1)
#define PC1_ALT2                (PC1  | ALT2)
#define PC4_ALT1                (PC4  | ALT1)
#define PC7_ALT1                (PC7  | ALT1)
#define PC7_ALT2                (PC7  | ALT2)
#define PC8_ALT1                (PC8  | ALT1)
#define PC9_ALT1                (PC9  | ALT1)
#define PC10_ALT1               (PC10 | ALT1)
#define PC11_ALT1               (PC11 | ALT1)
#define PF8_ALT1                (PF8  | ALT1)
#define PF9_ALT1                (PF9  | ALT1)

#define NUM_DIGITAL_PINS        112
#define NUM_DUALPAD_PINS        2
#define NUM_ANALOG_INPUTS       14

// On-board LED pin number
#ifndef LED_BUILTIN
  #define LED_BUILTIN           PC7
#endif

// HSE is 16MHz on Daisy Seed
#define HSE_VALUE               (16000000UL)

// SPI definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PB4
#endif
#ifndef PIN_SPI_SS1
  #define PIN_SPI_SS1           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS2
  #define PIN_SPI_SS2           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS3
  #define PIN_SPI_SS3           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PC3_C
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PC2_C
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PD10
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
  #define PIN_WIRE_SDA          PB9
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL          PB8
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM6
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM7
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  4
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PA1
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA0
#endif

// Extra HAL modules
#if !defined(HAL_DAC_MODULE_DISABLED)
  #define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_ETH_MODULE_DISABLED)
  #define HAL_ETH_MODULE_ENABLED
#endif
#if !defined(HAL_QSPI_MODULE_DISABLED)
  #define HAL_QSPI_MODULE_ENABLED
#endif
#if !defined(HAL_SD_MODULE_DISABLED)
  #define HAL_SD_MODULE_ENABLED
#endif

#define USE_PWR_LDO_SUPPLY

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial
  #endif
#endif
