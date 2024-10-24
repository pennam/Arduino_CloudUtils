/*
    This file is part of the Arduino_CloudUtils library.

    Copyright (c) 2024 Arduino SA

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "bpid.h"
#include "../sha256/SHA256.h"
#include "../hex/hex.h"

namespace arduino { namespace bpid {

    bool get(uint8_t* in, uint32_t size) {
        if (size < BOARD_PROVISIONING_ID_SIZE) {
            return false;
        }
        uint8_t offset = 0;
        if (!arduino::ucid::get(&in[offset], size)) {
            return false;
        }
        offset += arduino::ucid::UC_UID_SIZE;
        if (!arduino::mac::get(&in[offset], size - offset)) {
            return false;
        }
        offset += arduino::mac::IFACE_MAC_SIZE;
        if (!arduino::csn::get(&in[offset], size - offset)) {
            return false;
        }
        return true;
    }

    String get() {
        uint8_t data[BOARD_PROVISIONING_ID_SIZE];
        if (!get(data, sizeof(data))) {
            return String("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF");
        }
        uint8_t out[SHA256::HASH_SIZE];
        arduino::sha256::oneshot(data, sizeof(data), out, sizeof(data));
        return arduino::hex::encode(out, sizeof(out));
    }

}} // arduino::bpid