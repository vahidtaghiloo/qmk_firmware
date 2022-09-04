// Copyright 2022 vahidtaghiloo (@vahidtaghiloo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#include "config_common.h"

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { B8, B9, A3, A2 }
#define MATRIX_COL_PINS { B12, B13, A15, B3, B4, B5, A4, A5, A6, A7, B0, B1 }
// #define UNUSED_PINS { A8, B10 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { A0, B6 }
#define ENCODERS_PAD_B { A1, B7 }