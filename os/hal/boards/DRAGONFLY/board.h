/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for Pesky Products' Dragonfly board
 * https://www.tindie.com/products/onehorse/dragonfly-stm32l4-breakout-board/
 */

/*
 * Board identifier.
 */
#define BOARD_DRAGONFLY
#define BOARD_NAME                  "Pesky Products' Dragonfly"

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768U
#endif

#define STM32_LSEDRV                (3U << 3U)

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                16000000U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330U

/*
 * MCU type as defined in the ST header.
 */
#define STM32L476xx

/*
 * IO pins assignments.
 */

#define DRAGONFLY_PIN_0             5U
#define DRAGONFLY_PIN_0_GPIO        GPIOC
#define DRAGONFLY_PIN_1             4U
#define DRAGONFLY_PIN_1_GPIO        GPIOC
#define DRAGONFLY_PIN_2             12U
#define DRAGONFLY_PIN_2_GPIO        GPIOB
#define DRAGONFLY_PIN_3             13U
#define DRAGONFLY_PIN_3_GPIO        GPIOB
#define DRAGONFLY_PIN_4             14U
#define DRAGONFLY_PIN_4_GPIO        GPIOB
#define DRAGONFLY_PIN_5             15U
#define DRAGONFLY_PIN_5_GPIO        GPIOB
#define DRAGONFLY_PIN_6             9U
#define DRAGONFLY_PIN_6_GPIO        GPIOC
#define DRAGONFLY_PIN_7             8U
#define DRAGONFLY_PIN_7_GPIO        GPIOC
#define DRAGONFLY_PIN_8             3U
#define DRAGONFLY_PIN_8_GPIO        GPIOA
#define DRAGONFLY_PIN_9             2U
#define DRAGONFLY_PIN_9_GPIO        GPIOA
#define DRAGONFLY_PIN_10            2U
#define DRAGONFLY_PIN_10_GPIO       GPIOD
#define DRAGONFLY_PIN_11            12U
#define DRAGONFLY_PIN_11_GPIO       GPIOC
#define DRAGONFLY_PIN_12            11U
#define DRAGONFLY_PIN_12_GPIO       GPIOC
#define DRAGONFLY_PIN_13            10U
#define DRAGONFLY_PIN_13_GPIO       GPIOC
#define DRAGONFLY_PIN_31            1U
#define DRAGONFLY_PIN_31_GPIO       GPIOA
#define DRAGONFLY_PIN_30            0U
#define DRAGONFLY_PIN_30_GPIO       GPIOA
#define DRAGONFLY_PIN_21            8U
#define DRAGONFLY_PIN_21_GPIO       GPIOB
#define DRAGONFLY_PIN_20            9U
#define DRAGONFLY_PIN_20_GPIO       GPIOB
#define DRAGONFLY_PIN_A0            4U
#define DRAGONFLY_PIN_A0_GPIO       GPIOA
#define DRAGONFLY_PIN_A1            5U
#define DRAGONFLY_PIN_A1_GPIO       GPIOA
#define DRAGONFLY_PIN_A2            3U
#define DRAGONFLY_PIN_A2_GPIO       GPIOC
#define DRAGONFLY_PIN_A3            2U
#define DRAGONFLY_PIN_A3_GPIO       GPIOC
#define DRAGONFLY_PIN_A4            1U
#define DRAGONFLY_PIN_A4_GPIO       GPIOC
#define DRAGONFLY_PIN_A5            0U
#define DRAGONFLY_PIN_A5_GPIO       GPIOC
#define DRAGONFLY_PIN_39            7U
#define DRAGONFLY_PIN_39_GPIO       GPIOC
#define DRAGONFLY_PIN_38            6U
#define DRAGONFLY_PIN_38_GPIO       GPIOC
#define DRAGONFLY_PIN_41            15U
#define DRAGONFLY_PIN_41_GPIO       GPIOA
#define DRAGONFLY_PIN_42            7U
#define DRAGONFLY_PIN_42_GPIO       GPIOB
#define DRAGONFLY_PIN_43            6U
#define DRAGONFLY_PIN_43_GPIO       GPIOB
#define DRAGONFLY_PIN_MISO          4U
#define DRAGONFLY_PIN_MISO_GPIO     GPIOB
#define DRAGONFLY_PIN_SCK           3U
#define DRAGONFLY_PIN_SCK_GPIO      GPIOB
#define DRAGONFLY_PIN_SS            8U
#define DRAGONFLY_PIN_SS_GPIO       GPIOA
#define DRAGONFLY_PIN_MOSI          5U
#define DRAGONFLY_PIN_MOSI_GPIO     GPIOB
#define DRAGONFLY_PIN_SWDIO         13U
#define DRAGONFLY_PIN_SWDIO_GPIO    GPIOA
#define DRAGONFLY_PIN_SWCLK         14U
#define DRAGONFLY_PIN_SWCLK_GPIO    GPIOA
#define DRAGONFLY_VBUS_SENSE        9U
#define DRAGONFLY_VBUS_SENSE_GPIO   GPIOA
#define DRAGONFLY_USB_ID            10U
#define DRAGONFLY_USB_ID_GPIO       GPIOA
#define DRAGONFLY_USB_DM            11U
#define DRAGONFLY_USB_DM_GPIO       GPIOA
#define DRAGONFLY_USB_DP            12U
#define DRAGONFLY_USB_DP_GPIO       GPIOA
#define DRAGONFLY_QSPI_CLK          10U
#define DRAGONFLY_QSPI_CLK_GPIO     GPIOB
#define DRAGONFLY_QSPI_CS           11U
#define DRAGONFLY_QSPI_CS_GPIO      GPIOB
#define DRAGONFLY_QSPI_D0           1U
#define DRAGONFLY_QSPI_D0_GPIO      GPIOB
#define DRAGONFLY_QSPI_D1           0U
#define DRAGONFLY_QSPI_D1_GPIO      GPIOB
#define DRAGONFLY_QSPI_D2           7U
#define DRAGONFLY_QSPI_D2_GPIO      GPIOA
#define DRAGONFLY_QSPI_D3           6U
#define DRAGONFLY_QSPI_D3_GPIO      GPIOA
#define DRAGONFLY_OSC_IN            0U
#define DRAGONFLY_OSC_IN_GPIO       GPIOH
#define DRAGONFLY_OSC_OUT           1U
#define DRAGONFLY_OSC_OUT_GPIO      GPIOH
#define DRAGONFLY_OSC32_IN          14U
#define DRAGONFLY_OSC32_IN_GPIO     GPIOC
#define DRAGONFLY_OSC32_OUT         15U
#define DRAGONFLY_OSC32_OUT_GPIO    GPIOC

/*
 * IO lines assignments.
 */
#define LINE_PIN0                   PAL_LINE(GPIOC, 5U)
#define LINE_PIN1                   PAL_LINE(GPIOC, 4U)
#define LINE_PIN2                   PAL_LINE(GPIOB, 12U)
#define LINE_PIN3                   PAL_LINE(GPIOB, 13U)
#define LINE_PIN4                   PAL_LINE(GPIOB, 14U)
#define LINE_PIN5                   PAL_LINE(GPIOB, 15U)
#define LINE_PIN6                   PAL_LINE(GPIOC, 9U)
#define LINE_PIN7                   PAL_LINE(GPIOC, 8U)
#define LINE_PIN8                   PAL_LINE(GPIOA, 3U)
#define LINE_PIN9                   PAL_LINE(GPIOA, 2U)
#define LINE_PIN10                  PAL_LINE(GPIOD, 2U)
#define LINE_PIN11                  PAL_LINE(GPIOC, 12U)
#define LINE_PIN12                  PAL_LINE(GPIOC, 11U)
#define LINE_PIN13                  PAL_LINE(GPIOC, 10U)
#define LINE_PIN31                  PAL_LINE(GPIOA, 1U)
#define LINE_PIN30                  PAL_LINE(GPIOA, 0U)
#define LINE_PIN21                  PAL_LINE(GPIOB, 8U)
#define LINE_PIN20                  PAL_LINE(GPIOB, 9U)
#define LINE_PINA0                  PAL_LINE(GPIOA, 4U)
#define LINE_PINA1                  PAL_LINE(GPIOA, 5U)
#define LINE_PINA2                  PAL_LINE(GPIOC, 3U)
#define LINE_PINA3                  PAL_LINE(GPIOC, 2U)
#define LINE_PINA4                  PAL_LINE(GPIOC, 1U)
#define LINE_PINA5                  PAL_LINE(GPIOC, 0U)
#define LINE_PIN39                  PAL_LINE(GPIOC, 7U)
#define LINE_PIN38                  PAL_LINE(GPIOC, 6U)
#define LINE_PIN41                  PAL_LINE(GPIOA, 15U)
#define LINE_PIN42                  PAL_LINE(GPIOB, 7U)
#define LINE_PIN43                  PAL_LINE(GPIOB, 6U)
#define LINE_PIN_MISO               PAL_LINE(GPIOB, 4U)
#define LINE_PIN_SCK                PAL_LINE(GPIOB, 3U)
#define LINE_PIN_SS                 PAL_LINE(GPIOA, 8U)
#define LINE_PIN_MOSI               PAL_LINE(GPIOB, 5U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_VBUS_SENSE             PAL_LINE(GPIOA, 9U)
#define LINE_USB_ID                 PAL_LINE(GPIOA, 10U)
#define LINE_USB_DM                 PAL_LINE(GPIOA, 11U)
#define LINE_USB_DP                 PAL_LINE(GPIOA, 12U)
#define LINE_QSPI_CLK               PAL_LINE(GPIOB, 10U)
#define LINE_QSPI_CS                PAL_LINE(GPIOB, 11U)
#define LINE_QSPI_D0                PAL_LINE(GPIOB, 1U)
#define LINE_QSPI_D1                PAL_LINE(GPIOB, 0U)
#define LINE_QSPI_D2                PAL_LINE(GPIOA, 7U)
#define LINE_QSPI_D3                PAL_LINE(GPIOA, 6U)
#define LINE_OSC_IN                 PAL_LINE(GPIOH, 0U)
#define LINE_OSC_OUT                PAL_LINE(GPIOH, 1U)
#define LINE_OSC32_IN               PAL_LINE(GPIOC, 14U)
#define LINE_OSC32_OUT              PAL_LINE(GPIOC, 15U)

/*
 * Board features.
 */

#define DRAGONFLY_BUTTON_GPIO       GPIOC
#define DRAGONFLY_BUTTON_PIN        13U
#define LINE_BUTTON                 PAL_LINE(DRAGONFLY_BUTTON_GPIO, DRAGONFLY_BUTTON_PIN)

#define DRAGONFLY_LED_RED_GPIO      GPIOB
#define DRAGONFLY_LED_RED_PIN       2U
#define LINE_LED_RED                PAL_LINE(DRAGONFLY_LED_RED_GPIO, DRAGONFLY_LED_RED_PIN)
#define DRAGONFLY_LED_GREEN_GPIO    GPIOA
#define DRAGONFLY_LED_GREEN_PIN     10U
#define LINE_LED_GREEN              PAL_LINE(DRAGONFLY_LED_GREEN_GPIO, DRAGONFLY_LED_GREEN_PIN)
#define DRAGONFLY_LED_BLUE_GPIO     GPIOC
#define DRAGONFLY_LED_BLUE_PIN      10U
#define LINE_LED_BLUE               PAL_LINE(DRAGONFLY_LED_BLUE_GPIO, DRAGONFLY_LED_BLUE_PIN)

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))
#define PIN_ASCR_DISABLED(n)        (0U << (n))
#define PIN_ASCR_ENABLED(n)         (1U << (n))
#define PIN_LOCKR_DISABLED(n)       (0U << (n))
#define PIN_LOCKR_ENABLED(n)        (1U << (n))

/*
 * All pins not tied to an onboard feature
 * are input pullup.
 */

/* PORT A */
#define VAL_GPIOA_MODER ( \
    PIN_MODE_INPUT(0) | \
    PIN_MODE_INPUT(1) | \
    PIN_MODE_INPUT(2) | \
    PIN_MODE_INPUT(3) | \
    PIN_MODE_INPUT(4) | \
    PIN_MODE_INPUT(5) | \
    PIN_MODE_ALTERNATE(6) | \
    PIN_MODE_ALTERNATE(7) | \
    PIN_MODE_INPUT(8) | \
    PIN_MODE_INPUT(9) | \
    PIN_MODE_OUTPUT(10) | \
    PIN_MODE_ALTERNATE(11) | \
    PIN_MODE_ALTERNATE(12) | \
    PIN_MODE_ALTERNATE(13) | \
    PIN_MODE_ALTERNATE(14) | \
    PIN_MODE_INPUT(15))

#define VAL_GPIOA_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15))

#define VAL_GPIOA_OSPEEDR ( \
    PIN_OSPEED_LOW(0) | \
    PIN_OSPEED_LOW(1) | \
    PIN_OSPEED_LOW(2) | \
    PIN_OSPEED_LOW(3) | \
    PIN_OSPEED_LOW(4) | \
    PIN_OSPEED_LOW(5) | \
    PIN_OSPEED_HIGH(6) | \
    PIN_OSPEED_HIGH(7) | \
    PIN_OSPEED_LOW(8) | \
    PIN_OSPEED_LOW(9) | \
    PIN_OSPEED_HIGH(10) | \
    PIN_OSPEED_HIGH(11) | \
    PIN_OSPEED_HIGH(12) | \
    PIN_OSPEED_LOW(13) | \
    PIN_OSPEED_LOW(14) | \
    PIN_OSPEED_LOW(15))

#define VAL_GPIOA_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_FLOATING(10) | \
    PIN_PUPDR_FLOATING(11) | \
    PIN_PUPDR_FLOATING(12) | \
    PIN_PUPDR_FLOATING(13) | \
    PIN_PUPDR_FLOATING(14) | \
    PIN_PUPDR_PULLUP(15))

#define VAL_GPIOA_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15))

#define VAL_GPIOA_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 10) | \
    PIN_AFIO_AF(7, 10))

#define VAL_GPIOA_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 14) | \
    PIN_AFIO_AF(12, 14) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0))

#define VAL_GPIOA_ASCR  (   \
    PIN_ASCR_DISABLED(0) |  \
    PIN_ASCR_DISABLED(1) |  \
    PIN_ASCR_DISABLED(2) |  \
    PIN_ASCR_DISABLED(3) |  \
    PIN_ASCR_DISABLED(4) |  \
    PIN_ASCR_DISABLED(5) |  \
    PIN_ASCR_DISABLED(6) |  \
    PIN_ASCR_DISABLED(7) |  \
    PIN_ASCR_DISABLED(8) |  \
    PIN_ASCR_DISABLED(9) |  \
    PIN_ASCR_DISABLED(10) | \
    PIN_ASCR_DISABLED(11) | \
    PIN_ASCR_DISABLED(12) | \
    PIN_ASCR_DISABLED(13) | \
    PIN_ASCR_DISABLED(14) | \
    PIN_ASCR_DISABLED(15))

#define VAL_GPIOA_LOCKR  (   \
    PIN_LOCKR_DISABLED(0) |  \
    PIN_LOCKR_DISABLED(1) |  \
    PIN_LOCKR_DISABLED(2) |  \
    PIN_LOCKR_DISABLED(3) |  \
    PIN_LOCKR_DISABLED(4) |  \
    PIN_LOCKR_DISABLED(5) |  \
    PIN_LOCKR_DISABLED(6) |  \
    PIN_LOCKR_DISABLED(7) |  \
    PIN_LOCKR_DISABLED(8) |  \
    PIN_LOCKR_DISABLED(9) |  \
    PIN_LOCKR_DISABLED(10) | \
    PIN_LOCKR_DISABLED(11) | \
    PIN_LOCKR_DISABLED(12) | \
    PIN_LOCKR_DISABLED(13) | \
    PIN_LOCKR_DISABLED(14) | \
    PIN_LOCKR_DISABLED(15))

/* PORT B */
#define VAL_GPIOB_MODER ( \
    PIN_MODE_ALTERNATE(0) | \
    PIN_MODE_ALTERNATE(1) | \
    PIN_MODE_OUTPUT(2) | \
    PIN_MODE_INPUT(3) | \
    PIN_MODE_INPUT(4) | \
    PIN_MODE_INPUT(5) | \
    PIN_MODE_INPUT(6) | \
    PIN_MODE_INPUT(7) | \
    PIN_MODE_INPUT(8) | \
    PIN_MODE_INPUT(9) | \
    PIN_MODE_ALTERNATE(10) | \
    PIN_MODE_ALTERNATE(11) | \
    PIN_MODE_INPUT(12) | \
    PIN_MODE_INPUT(13) | \
    PIN_MODE_INPUT(14) | \
    PIN_MODE_INPUT(15))

#define VAL_GPIOB_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15))

#define VAL_GPIOB_OSPEEDR ( \
    PIN_OSPEED_HIGH(0) | \
    PIN_OSPEED_HIGH(1) | \
    PIN_OSPEED_HIGH(2) | \
    PIN_OSPEED_LOW(3) | \
    PIN_OSPEED_LOW(4) | \
    PIN_OSPEED_LOW(5) | \
    PIN_OSPEED_LOW(6) | \
    PIN_OSPEED_LOW(7) | \
    PIN_OSPEED_LOW(8) | \
    PIN_OSPEED_LOW(9) | \
    PIN_OSPEED_HIGH(10) | \
    PIN_OSPEED_HIGH(11) | \
    PIN_OSPEED_LOW(12) | \
    PIN_OSPEED_LOW(13) | \
    PIN_OSPEED_LOW(14) | \
    PIN_OSPEED_LOW(15))

#define VAL_GPIOB_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_FLOATING(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15))

#define VAL_GPIOB_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15))

#define VAL_GPIOB_AFRL ( \
    PIN_AFIO_AF(0, 10) | \
    PIN_AFIO_AF(1, 10) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0))

#define VAL_GPIOB_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 10) | \
    PIN_AFIO_AF(11, 10) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0))

#define VAL_GPIOB_ASCR  (   \
    PIN_ASCR_DISABLED(0) |  \
    PIN_ASCR_DISABLED(1) |  \
    PIN_ASCR_DISABLED(2) |  \
    PIN_ASCR_DISABLED(3) |  \
    PIN_ASCR_DISABLED(4) |  \
    PIN_ASCR_DISABLED(5) |  \
    PIN_ASCR_DISABLED(6) |  \
    PIN_ASCR_DISABLED(7) |  \
    PIN_ASCR_DISABLED(8) |  \
    PIN_ASCR_DISABLED(9) |  \
    PIN_ASCR_DISABLED(10) | \
    PIN_ASCR_DISABLED(11) | \
    PIN_ASCR_DISABLED(12) | \
    PIN_ASCR_DISABLED(13) | \
    PIN_ASCR_DISABLED(14) | \
    PIN_ASCR_DISABLED(15))

#define VAL_GPIOB_LOCKR  (   \
    PIN_LOCKR_DISABLED(0) |  \
    PIN_LOCKR_DISABLED(1) |  \
    PIN_LOCKR_DISABLED(2) |  \
    PIN_LOCKR_DISABLED(3) |  \
    PIN_LOCKR_DISABLED(4) |  \
    PIN_LOCKR_DISABLED(5) |  \
    PIN_LOCKR_DISABLED(6) |  \
    PIN_LOCKR_DISABLED(7) |  \
    PIN_LOCKR_DISABLED(8) |  \
    PIN_LOCKR_DISABLED(9) |  \
    PIN_LOCKR_DISABLED(10) | \
    PIN_LOCKR_DISABLED(11) | \
    PIN_LOCKR_DISABLED(12) | \
    PIN_LOCKR_DISABLED(13) | \
    PIN_LOCKR_DISABLED(14) | \
    PIN_LOCKR_DISABLED(15))

/* PORT C */
#define VAL_GPIOC_MODER ( \
    PIN_MODE_INPUT(0) | \
    PIN_MODE_INPUT(1) | \
    PIN_MODE_INPUT(2) | \
    PIN_MODE_INPUT(3) | \
    PIN_MODE_INPUT(4) | \
    PIN_MODE_INPUT(5) | \
    PIN_MODE_INPUT(6) | \
    PIN_MODE_INPUT(7) | \
    PIN_MODE_INPUT(8) | \
    PIN_MODE_INPUT(9) | \
    PIN_MODE_OUTPUT(10) | \
    PIN_MODE_INPUT(11) | \
    PIN_MODE_INPUT(12) | \
    PIN_MODE_INPUT(13) | \
    PIN_MODE_INPUT(14) | \
    PIN_MODE_INPUT(15))

#define VAL_GPIOC_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15))

#define VAL_GPIOC_OSPEEDR ( \
    PIN_OSPEED_LOW(0) | \
    PIN_OSPEED_LOW(1) | \
    PIN_OSPEED_LOW(2) | \
    PIN_OSPEED_LOW(3) | \
    PIN_OSPEED_LOW(4) | \
    PIN_OSPEED_LOW(5) | \
    PIN_OSPEED_LOW(6) | \
    PIN_OSPEED_LOW(7) | \
    PIN_OSPEED_LOW(8) | \
    PIN_OSPEED_LOW(9) | \
    PIN_OSPEED_HIGH(10) | \
    PIN_OSPEED_LOW(11) | \
    PIN_OSPEED_LOW(12) | \
    PIN_OSPEED_HIGH(13) | \
    PIN_OSPEED_LOW(14) | \
    PIN_OSPEED_LOW(15))

#define VAL_GPIOC_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_FLOATING(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_FLOATING(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15))

#define VAL_GPIOC_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15))

#define VAL_GPIOC_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0))

#define VAL_GPIOC_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0))

#define VAL_GPIOC_ASCR  (   \
    PIN_ASCR_DISABLED(0) |  \
    PIN_ASCR_DISABLED(1) |  \
    PIN_ASCR_DISABLED(2) |  \
    PIN_ASCR_DISABLED(3) |  \
    PIN_ASCR_DISABLED(4) |  \
    PIN_ASCR_DISABLED(5) |  \
    PIN_ASCR_DISABLED(6) |  \
    PIN_ASCR_DISABLED(7) |  \
    PIN_ASCR_DISABLED(8) |  \
    PIN_ASCR_DISABLED(9) |  \
    PIN_ASCR_DISABLED(10) | \
    PIN_ASCR_DISABLED(11) | \
    PIN_ASCR_DISABLED(12) | \
    PIN_ASCR_DISABLED(13) | \
    PIN_ASCR_DISABLED(14) | \
    PIN_ASCR_DISABLED(15))

#define VAL_GPIOC_LOCKR  (   \
    PIN_LOCKR_DISABLED(0) |  \
    PIN_LOCKR_DISABLED(1) |  \
    PIN_LOCKR_DISABLED(2) |  \
    PIN_LOCKR_DISABLED(3) |  \
    PIN_LOCKR_DISABLED(4) |  \
    PIN_LOCKR_DISABLED(5) |  \
    PIN_LOCKR_DISABLED(6) |  \
    PIN_LOCKR_DISABLED(7) |  \
    PIN_LOCKR_DISABLED(8) |  \
    PIN_LOCKR_DISABLED(9) |  \
    PIN_LOCKR_DISABLED(10) | \
    PIN_LOCKR_DISABLED(11) | \
    PIN_LOCKR_DISABLED(12) | \
    PIN_LOCKR_DISABLED(13) | \
    PIN_LOCKR_DISABLED(14) | \
    PIN_LOCKR_DISABLED(15))

/* PORT D */
#define VAL_GPIOD_MODER ( \
    PIN_MODE_INPUT(0) | \
    PIN_MODE_INPUT(1) | \
    PIN_MODE_INPUT(2) | \
    PIN_MODE_INPUT(3) | \
    PIN_MODE_INPUT(4) | \
    PIN_MODE_INPUT(5) | \
    PIN_MODE_INPUT(6) | \
    PIN_MODE_INPUT(7) | \
    PIN_MODE_INPUT(8) | \
    PIN_MODE_INPUT(9) | \
    PIN_MODE_INPUT(10) | \
    PIN_MODE_INPUT(11) | \
    PIN_MODE_INPUT(12) | \
    PIN_MODE_INPUT(13) | \
    PIN_MODE_INPUT(14) | \
    PIN_MODE_INPUT(15))

#define VAL_GPIOD_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15))

#define VAL_GPIOD_OSPEEDR ( \
    PIN_OSPEED_LOW(0) | \
    PIN_OSPEED_LOW(1) | \
    PIN_OSPEED_LOW(2) | \
    PIN_OSPEED_LOW(3) | \
    PIN_OSPEED_LOW(4) | \
    PIN_OSPEED_LOW(5) | \
    PIN_OSPEED_LOW(6) | \
    PIN_OSPEED_LOW(7) | \
    PIN_OSPEED_LOW(8) | \
    PIN_OSPEED_LOW(9) | \
    PIN_OSPEED_LOW(10) | \
    PIN_OSPEED_LOW(11) | \
    PIN_OSPEED_LOW(12) | \
    PIN_OSPEED_LOW(13) | \
    PIN_OSPEED_LOW(14) | \
    PIN_OSPEED_LOW(15))

#define VAL_GPIOD_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15))

#define VAL_GPIOD_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15))

#define VAL_GPIOD_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0))

#define VAL_GPIOD_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0))

#define VAL_GPIOD_ASCR  (   \
    PIN_ASCR_DISABLED(0) |  \
    PIN_ASCR_DISABLED(1) |  \
    PIN_ASCR_DISABLED(2) |  \
    PIN_ASCR_DISABLED(3) |  \
    PIN_ASCR_DISABLED(4) |  \
    PIN_ASCR_DISABLED(5) |  \
    PIN_ASCR_DISABLED(6) |  \
    PIN_ASCR_DISABLED(7) |  \
    PIN_ASCR_DISABLED(8) |  \
    PIN_ASCR_DISABLED(9) |  \
    PIN_ASCR_DISABLED(10) | \
    PIN_ASCR_DISABLED(11) | \
    PIN_ASCR_DISABLED(12) | \
    PIN_ASCR_DISABLED(13) | \
    PIN_ASCR_DISABLED(14) | \
    PIN_ASCR_DISABLED(15))

#define VAL_GPIOD_LOCKR  (   \
    PIN_LOCKR_DISABLED(0) |  \
    PIN_LOCKR_DISABLED(1) |  \
    PIN_LOCKR_DISABLED(2) |  \
    PIN_LOCKR_DISABLED(3) |  \
    PIN_LOCKR_DISABLED(4) |  \
    PIN_LOCKR_DISABLED(5) |  \
    PIN_LOCKR_DISABLED(6) |  \
    PIN_LOCKR_DISABLED(7) |  \
    PIN_LOCKR_DISABLED(8) |  \
    PIN_LOCKR_DISABLED(9) |  \
    PIN_LOCKR_DISABLED(10) | \
    PIN_LOCKR_DISABLED(11) | \
    PIN_LOCKR_DISABLED(12) | \
    PIN_LOCKR_DISABLED(13) | \
    PIN_LOCKR_DISABLED(14) | \
    PIN_LOCKR_DISABLED(15))

/* PORT E */
#define VAL_GPIOE_MODER ( \
    PIN_MODE_INPUT(0) | \
    PIN_MODE_INPUT(1) | \
    PIN_MODE_INPUT(2) | \
    PIN_MODE_INPUT(3) | \
    PIN_MODE_INPUT(4) | \
    PIN_MODE_INPUT(5) | \
    PIN_MODE_INPUT(6) | \
    PIN_MODE_INPUT(7) | \
    PIN_MODE_INPUT(8) | \
    PIN_MODE_INPUT(9) | \
    PIN_MODE_INPUT(10) | \
    PIN_MODE_INPUT(11) | \
    PIN_MODE_INPUT(12) | \
    PIN_MODE_INPUT(13) | \
    PIN_MODE_INPUT(14) | \
    PIN_MODE_INPUT(15))

#define VAL_GPIOE_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15))

#define VAL_GPIOE_OSPEEDR ( \
    PIN_OSPEED_LOW(0) | \
    PIN_OSPEED_LOW(1) | \
    PIN_OSPEED_LOW(2) | \
    PIN_OSPEED_LOW(3) | \
    PIN_OSPEED_LOW(4) | \
    PIN_OSPEED_LOW(5) | \
    PIN_OSPEED_LOW(6) | \
    PIN_OSPEED_LOW(7) | \
    PIN_OSPEED_LOW(8) | \
    PIN_OSPEED_LOW(9) | \
    PIN_OSPEED_LOW(10) | \
    PIN_OSPEED_LOW(11) | \
    PIN_OSPEED_LOW(12) | \
    PIN_OSPEED_LOW(13) | \
    PIN_OSPEED_LOW(14) | \
    PIN_OSPEED_LOW(15))

#define VAL_GPIOE_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15))

#define VAL_GPIOE_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15))

#define VAL_GPIOE_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0))

#define VAL_GPIOE_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0))

#define VAL_GPIOE_ASCR  (   \
    PIN_ASCR_DISABLED(0) |  \
    PIN_ASCR_DISABLED(1) |  \
    PIN_ASCR_DISABLED(2) |  \
    PIN_ASCR_DISABLED(3) |  \
    PIN_ASCR_DISABLED(4) |  \
    PIN_ASCR_DISABLED(5) |  \
    PIN_ASCR_DISABLED(6) |  \
    PIN_ASCR_DISABLED(7) |  \
    PIN_ASCR_DISABLED(8) |  \
    PIN_ASCR_DISABLED(9) |  \
    PIN_ASCR_DISABLED(10) | \
    PIN_ASCR_DISABLED(11) | \
    PIN_ASCR_DISABLED(12) | \
    PIN_ASCR_DISABLED(13) | \
    PIN_ASCR_DISABLED(14) | \
    PIN_ASCR_DISABLED(15))

#define VAL_GPIOE_LOCKR  (   \
    PIN_LOCKR_DISABLED(0) |  \
    PIN_LOCKR_DISABLED(1) |  \
    PIN_LOCKR_DISABLED(2) |  \
    PIN_LOCKR_DISABLED(3) |  \
    PIN_LOCKR_DISABLED(4) |  \
    PIN_LOCKR_DISABLED(5) |  \
    PIN_LOCKR_DISABLED(6) |  \
    PIN_LOCKR_DISABLED(7) |  \
    PIN_LOCKR_DISABLED(8) |  \
    PIN_LOCKR_DISABLED(9) |  \
    PIN_LOCKR_DISABLED(10) | \
    PIN_LOCKR_DISABLED(11) | \
    PIN_LOCKR_DISABLED(12) | \
    PIN_LOCKR_DISABLED(13) | \
    PIN_LOCKR_DISABLED(14) | \
    PIN_LOCKR_DISABLED(15))

/* PORT F */
#define VAL_GPIOF_MODER ( \
    PIN_MODE_INPUT(0) | \
    PIN_MODE_INPUT(1) | \
    PIN_MODE_INPUT(2) | \
    PIN_MODE_INPUT(3) | \
    PIN_MODE_INPUT(4) | \
    PIN_MODE_INPUT(5) | \
    PIN_MODE_INPUT(6) | \
    PIN_MODE_INPUT(7) | \
    PIN_MODE_INPUT(8) | \
    PIN_MODE_INPUT(9) | \
    PIN_MODE_INPUT(10) | \
    PIN_MODE_INPUT(11) | \
    PIN_MODE_INPUT(12) | \
    PIN_MODE_INPUT(13) | \
    PIN_MODE_INPUT(14) | \
    PIN_MODE_INPUT(15))

#define VAL_GPIOF_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15))

#define VAL_GPIOF_OSPEEDR ( \
    PIN_OSPEED_LOW(0) | \
    PIN_OSPEED_LOW(1) | \
    PIN_OSPEED_LOW(2) | \
    PIN_OSPEED_LOW(3) | \
    PIN_OSPEED_LOW(4) | \
    PIN_OSPEED_LOW(5) | \
    PIN_OSPEED_LOW(6) | \
    PIN_OSPEED_LOW(7) | \
    PIN_OSPEED_LOW(8) | \
    PIN_OSPEED_LOW(9) | \
    PIN_OSPEED_LOW(10) | \
    PIN_OSPEED_LOW(11) | \
    PIN_OSPEED_LOW(12) | \
    PIN_OSPEED_LOW(13) | \
    PIN_OSPEED_LOW(14) | \
    PIN_OSPEED_LOW(15))

#define VAL_GPIOF_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15))

#define VAL_GPIOF_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15))

#define VAL_GPIOF_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0))

#define VAL_GPIOF_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0))

#define VAL_GPIOF_ASCR  (   \
    PIN_ASCR_DISABLED(0) |  \
    PIN_ASCR_DISABLED(1) |  \
    PIN_ASCR_DISABLED(2) |  \
    PIN_ASCR_DISABLED(3) |  \
    PIN_ASCR_DISABLED(4) |  \
    PIN_ASCR_DISABLED(5) |  \
    PIN_ASCR_DISABLED(6) |  \
    PIN_ASCR_DISABLED(7) |  \
    PIN_ASCR_DISABLED(8) |  \
    PIN_ASCR_DISABLED(9) |  \
    PIN_ASCR_DISABLED(10) | \
    PIN_ASCR_DISABLED(11) | \
    PIN_ASCR_DISABLED(12) | \
    PIN_ASCR_DISABLED(13) | \
    PIN_ASCR_DISABLED(14) | \
    PIN_ASCR_DISABLED(15))

#define VAL_GPIOF_LOCKR  (   \
    PIN_LOCKR_DISABLED(0) |  \
    PIN_LOCKR_DISABLED(1) |  \
    PIN_LOCKR_DISABLED(2) |  \
    PIN_LOCKR_DISABLED(3) |  \
    PIN_LOCKR_DISABLED(4) |  \
    PIN_LOCKR_DISABLED(5) |  \
    PIN_LOCKR_DISABLED(6) |  \
    PIN_LOCKR_DISABLED(7) |  \
    PIN_LOCKR_DISABLED(8) |  \
    PIN_LOCKR_DISABLED(9) |  \
    PIN_LOCKR_DISABLED(10) | \
    PIN_LOCKR_DISABLED(11) | \
    PIN_LOCKR_DISABLED(12) | \
    PIN_LOCKR_DISABLED(13) | \
    PIN_LOCKR_DISABLED(14) | \
    PIN_LOCKR_DISABLED(15))

/* PORT G (analog) */
#define VAL_GPIOG_MODER ( \
    PIN_MODE_ANALOG(0) |  \
    PIN_MODE_ANALOG(1) |  \
    PIN_MODE_ANALOG(2) |  \
    PIN_MODE_ANALOG(3) |  \
    PIN_MODE_ANALOG(4) |  \
    PIN_MODE_ANALOG(5) |  \
    PIN_MODE_ANALOG(6) |  \
    PIN_MODE_ANALOG(7) |  \
    PIN_MODE_ANALOG(8) |  \
    PIN_MODE_ANALOG(9) |  \
    PIN_MODE_ANALOG(10) | \
    PIN_MODE_ANALOG(11) | \
    PIN_MODE_ANALOG(12) | \
    PIN_MODE_ANALOG(13) | \
    PIN_MODE_ANALOG(14) | \
    PIN_MODE_ANALOG(15))

#define VAL_GPIOG_OTYPER (   \
    PIN_OTYPE_PUSHPULL(0) |  \
    PIN_OTYPE_PUSHPULL(1) |  \
    PIN_OTYPE_PUSHPULL(2) |  \
    PIN_OTYPE_PUSHPULL(3) |  \
    PIN_OTYPE_PUSHPULL(4) |  \
    PIN_OTYPE_PUSHPULL(5) |  \
    PIN_OTYPE_PUSHPULL(6) |  \
    PIN_OTYPE_PUSHPULL(7) |  \
    PIN_OTYPE_PUSHPULL(8) |  \
    PIN_OTYPE_PUSHPULL(9) |  \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15))

#define VAL_GPIOG_OSPEEDR (  \
    PIN_OSPEED_VERYLOW(0) |  \
    PIN_OSPEED_VERYLOW(1) |  \
    PIN_OSPEED_VERYLOW(2) |  \
    PIN_OSPEED_VERYLOW(3) |  \
    PIN_OSPEED_VERYLOW(4) |  \
    PIN_OSPEED_VERYLOW(5) |  \
    PIN_OSPEED_VERYLOW(6) |  \
    PIN_OSPEED_VERYLOW(7) |  \
    PIN_OSPEED_VERYLOW(8) |  \
    PIN_OSPEED_VERYLOW(9) |  \
    PIN_OSPEED_VERYLOW(10) | \
    PIN_OSPEED_VERYLOW(11) | \
    PIN_OSPEED_VERYLOW(12) | \
    PIN_OSPEED_VERYLOW(13) | \
    PIN_OSPEED_VERYLOW(14) | \
    PIN_OSPEED_VERYLOW(15))

#define VAL_GPIOG_PUPDR (    \
    PIN_PUPDR_FLOATING(0) |  \
    PIN_PUPDR_FLOATING(1) |  \
    PIN_PUPDR_FLOATING(2) |  \
    PIN_PUPDR_FLOATING(3) |  \
    PIN_PUPDR_FLOATING(4) |  \
    PIN_PUPDR_FLOATING(5) |  \
    PIN_PUPDR_FLOATING(6) |  \
    PIN_PUPDR_FLOATING(7) |  \
    PIN_PUPDR_FLOATING(8) |  \
    PIN_PUPDR_FLOATING(9) |  \
    PIN_PUPDR_FLOATING(10) | \
    PIN_PUPDR_FLOATING(11) | \
    PIN_PUPDR_FLOATING(12) | \
    PIN_PUPDR_FLOATING(13) | \
    PIN_PUPDR_FLOATING(14) | \
    PIN_PUPDR_FLOATING(15))

#define VAL_GPIOG_ODR ( \
    PIN_ODR_HIGH(0) |  \
    PIN_ODR_HIGH(1) |  \
    PIN_ODR_HIGH(2) |  \
    PIN_ODR_HIGH(3) |  \
    PIN_ODR_HIGH(4) |  \
    PIN_ODR_HIGH(5) |  \
    PIN_ODR_HIGH(6) |  \
    PIN_ODR_HIGH(7) |  \
    PIN_ODR_HIGH(8) |  \
    PIN_ODR_HIGH(9) |  \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15))

#define VAL_GPIOG_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0))

#define VAL_GPIOG_AFRH ( \
    PIN_AFIO_AF(8, 0) |  \
    PIN_AFIO_AF(9, 0) |  \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0))

#define VAL_GPIOG_ASCR ( \
    PIN_ASCR_DISABLED(0) |  \
    PIN_ASCR_DISABLED(1) |  \
    PIN_ASCR_DISABLED(2) |  \
    PIN_ASCR_DISABLED(3) |  \
    PIN_ASCR_DISABLED(4) |  \
    PIN_ASCR_DISABLED(5) |  \
    PIN_ASCR_DISABLED(6) |  \
    PIN_ASCR_DISABLED(7) |  \
    PIN_ASCR_DISABLED(8) |  \
    PIN_ASCR_DISABLED(9) |  \
    PIN_ASCR_DISABLED(10) | \
    PIN_ASCR_DISABLED(11) | \
    PIN_ASCR_DISABLED(12) | \
    PIN_ASCR_DISABLED(13) | \
    PIN_ASCR_DISABLED(14) | \
    PIN_ASCR_DISABLED(15))

#define VAL_GPIOG_LOCKR ( \
    PIN_LOCKR_DISABLED(0) |  \
    PIN_LOCKR_DISABLED(1) |  \
    PIN_LOCKR_DISABLED(2) |  \
    PIN_LOCKR_DISABLED(3) |  \
    PIN_LOCKR_DISABLED(4) |  \
    PIN_LOCKR_DISABLED(5) |  \
    PIN_LOCKR_DISABLED(6) |  \
    PIN_LOCKR_DISABLED(7) |  \
    PIN_LOCKR_DISABLED(8) |  \
    PIN_LOCKR_DISABLED(9) |  \
    PIN_LOCKR_DISABLED(10) | \
    PIN_LOCKR_DISABLED(11) | \
    PIN_LOCKR_DISABLED(12) | \
    PIN_LOCKR_DISABLED(13) | \
    PIN_LOCKR_DISABLED(14) | \
    PIN_LOCKR_DISABLED(15))

/* PORT H (osc; analog) */
#define VAL_GPIOH_MODER ( \
    PIN_MODE_INPUT(0) |   \
    PIN_MODE_INPUT(1) |   \
    PIN_MODE_ANALOG(2) |  \
    PIN_MODE_ANALOG(3) |  \
    PIN_MODE_ANALOG(4) |  \
    PIN_MODE_ANALOG(5) |  \
    PIN_MODE_ANALOG(6) |  \
    PIN_MODE_ANALOG(7) |  \
    PIN_MODE_ANALOG(8) |  \
    PIN_MODE_ANALOG(9) |  \
    PIN_MODE_ANALOG(10) | \
    PIN_MODE_ANALOG(11) | \
    PIN_MODE_ANALOG(12) | \
    PIN_MODE_ANALOG(13) | \
    PIN_MODE_ANALOG(14) | \
    PIN_MODE_ANALOG(15))

#define VAL_GPIOH_OTYPER (   \
    PIN_OTYPE_PUSHPULL(0) |  \
    PIN_OTYPE_PUSHPULL(1) |  \
    PIN_OTYPE_PUSHPULL(2) |  \
    PIN_OTYPE_PUSHPULL(3) |  \
    PIN_OTYPE_PUSHPULL(4) |  \
    PIN_OTYPE_PUSHPULL(5) |  \
    PIN_OTYPE_PUSHPULL(6) |  \
    PIN_OTYPE_PUSHPULL(7) |  \
    PIN_OTYPE_PUSHPULL(8) |  \
    PIN_OTYPE_PUSHPULL(9) |  \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15))

#define VAL_GPIOH_OSPEEDR (  \
    PIN_OSPEED_HIGH(0) |     \
    PIN_OSPEED_HIGH(1) |     \
    PIN_OSPEED_VERYLOW(2) |  \
    PIN_OSPEED_VERYLOW(3) |  \
    PIN_OSPEED_VERYLOW(4) |  \
    PIN_OSPEED_VERYLOW(5) |  \
    PIN_OSPEED_VERYLOW(6) |  \
    PIN_OSPEED_VERYLOW(7) |  \
    PIN_OSPEED_VERYLOW(8) |  \
    PIN_OSPEED_VERYLOW(9) |  \
    PIN_OSPEED_VERYLOW(10) | \
    PIN_OSPEED_VERYLOW(11) | \
    PIN_OSPEED_VERYLOW(12) | \
    PIN_OSPEED_VERYLOW(13) | \
    PIN_OSPEED_VERYLOW(14) | \
    PIN_OSPEED_VERYLOW(15))

#define VAL_GPIOH_PUPDR (    \
    PIN_PUPDR_FLOATING(0) |  \
    PIN_PUPDR_FLOATING(1) |  \
    PIN_PUPDR_FLOATING(2) |  \
    PIN_PUPDR_FLOATING(3) |  \
    PIN_PUPDR_FLOATING(4) |  \
    PIN_PUPDR_FLOATING(5) |  \
    PIN_PUPDR_FLOATING(6) |  \
    PIN_PUPDR_FLOATING(7) |  \
    PIN_PUPDR_FLOATING(8) |  \
    PIN_PUPDR_FLOATING(9) |  \
    PIN_PUPDR_FLOATING(10) | \
    PIN_PUPDR_FLOATING(11) | \
    PIN_PUPDR_FLOATING(12) | \
    PIN_PUPDR_FLOATING(13) | \
    PIN_PUPDR_FLOATING(14) | \
    PIN_PUPDR_FLOATING(15))

#define VAL_GPIOH_ODR ( \
    PIN_ODR_HIGH(0) |  \
    PIN_ODR_HIGH(1) |  \
    PIN_ODR_HIGH(2) |  \
    PIN_ODR_HIGH(3) |  \
    PIN_ODR_HIGH(4) |  \
    PIN_ODR_HIGH(5) |  \
    PIN_ODR_HIGH(6) |  \
    PIN_ODR_HIGH(7) |  \
    PIN_ODR_HIGH(8) |  \
    PIN_ODR_HIGH(9) |  \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15))

#define VAL_GPIOH_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0))

#define VAL_GPIOH_AFRH ( \
    PIN_AFIO_AF(8, 0) |  \
    PIN_AFIO_AF(9, 0) |  \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0))

#define VAL_GPIOH_ASCR ( \
    PIN_ASCR_DISABLED(0) |  \
    PIN_ASCR_DISABLED(1) |  \
    PIN_ASCR_DISABLED(2) |  \
    PIN_ASCR_DISABLED(3) |  \
    PIN_ASCR_DISABLED(4) |  \
    PIN_ASCR_DISABLED(5) |  \
    PIN_ASCR_DISABLED(6) |  \
    PIN_ASCR_DISABLED(7) |  \
    PIN_ASCR_DISABLED(8) |  \
    PIN_ASCR_DISABLED(9) |  \
    PIN_ASCR_DISABLED(10) | \
    PIN_ASCR_DISABLED(11) | \
    PIN_ASCR_DISABLED(12) | \
    PIN_ASCR_DISABLED(13) | \
    PIN_ASCR_DISABLED(14) | \
    PIN_ASCR_DISABLED(15))

#define VAL_GPIOH_LOCKR ( \
    PIN_LOCKR_DISABLED(0) |  \
    PIN_LOCKR_DISABLED(1) |  \
    PIN_LOCKR_DISABLED(2) |  \
    PIN_LOCKR_DISABLED(3) |  \
    PIN_LOCKR_DISABLED(4) |  \
    PIN_LOCKR_DISABLED(5) |  \
    PIN_LOCKR_DISABLED(6) |  \
    PIN_LOCKR_DISABLED(7) |  \
    PIN_LOCKR_DISABLED(8) |  \
    PIN_LOCKR_DISABLED(9) |  \
    PIN_LOCKR_DISABLED(10) | \
    PIN_LOCKR_DISABLED(11) | \
    PIN_LOCKR_DISABLED(12) | \
    PIN_LOCKR_DISABLED(13) | \
    PIN_LOCKR_DISABLED(14) | \
    PIN_LOCKR_DISABLED(15))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
