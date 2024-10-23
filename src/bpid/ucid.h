/*
    This file is part of the Arduino_CloudUtils library.

    Copyright (c) 2024 Arduino SA

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#pragma once

#include <Arduino.h>

namespace arduino { namespace ucid {
    /*
     * This library contains the methods to get board microcontroller id
     */

#if   defined(ARDUINO_SAMD_MKRWIFI1010) || \
      defined(ARDUINO_SAMD_NANO_33_IOT)
    constexpr int UC_UID_SIZE = 16;
#elif defined(ARDUINO_PORTENTA_H7_M7)   || \
      defined(ARDUINO_NICLA_VISION)     || \
      defined(ARDUINO_OPTA)             || \
      defined(ARDUINO_GIGA)
    constexpr int UC_UID_SIZE  = 12;
#elif defined(ARDUINO_PORTENTA_C33)     || \
      defined(ARDUINO_UNOR4_WIFI)
    constexpr int UC_UID_SIZE  = 16;
#elif defined(ARDUINO_NANO_RP2040_CONNECT)
    extern "C" {
        #include "hardware/flash.h"
    }
    constexpr int UC_UID_SIZE  = FLASH_UNIQUE_ID_SIZE_BYTES;
#else
    #error "Unknown board"
#endif

    bool get(uint8_t *in, uint32_t size);

}} // arduino::ucid