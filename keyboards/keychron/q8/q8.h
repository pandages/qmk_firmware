/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

<<<<<<< HEAD
<<<<<<<< HEAD:keyboards/keychron/q8/q8.h
=======
>>>>>>> playground_new
#include "quantum.h"

#if defined(KEYBOARD_keychron_q8_q8_ansi_stm32l432)
#    include "q8_ansi_stm32l432.h"
#elif defined(KEYBOARD_keychron_q8_q8_ansi_stm32l432_ec11)
#    include "q8_ansi_stm32l432_ec11.h"
<<<<<<< HEAD
#endif
========
/* USB Device descriptor parameter */
#define PRODUCT_ID 0x0340
#define DEVICE_VER 0x0102

/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 61
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL

/* Enable CapsLcok LED*/
#define CAPS_LOCK_LED_INDEX 28
>>>>>>>> playground_new:keyboards/keychron/v4/v4_ansi_stm32l432/config.h
=======
#elif defined(KEYBOARD_keychron_q8_q8_iso_stm32l432)
#    include "q8_iso_stm32l432.h"
#elif defined(KEYBOARD_keychron_q8_q8_iso_stm32l432_ec11)
#    include "q8_iso_stm32l432_ec11.h"
#endif
>>>>>>> playground_new
