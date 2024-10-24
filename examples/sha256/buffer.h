#pragma once

/*
 * The following buffer is an hex dump of 1k of random data generated as 
 * head -c 1k /dev/urandom > /tmp/test
 * and dumped with the following command `hexdump extras/test/test_files/test-1k -e '32/1 "0x%02X, ""\n"'`
 * The SHA256 is known 1a7004279b162a6321de07de9d0362a66833b16f9acf870a69331e219eeafc7c  /tmp/test
 */

uint8_t buffer[] = {
    0x58, 0x1A, 0x10, 0xDD, 0x00, 0xBE, 0xE1, 0x2B, 0xE5, 0xA9, 0x62, 0xAF, 0x59, 0x66, 0x9C, 0x84, 0x50, 0x91, 0x30, 0x8E, 0x8F, 0xE4, 0x82, 0xE7, 0xDA, 0x9F, 0x90, 0x7A, 0xA2, 0x78, 0xCF, 0x7D,
    0x40, 0x0E, 0x15, 0x5D, 0x2E, 0xF8, 0x6F, 0xA2, 0xEC, 0x50, 0xF1, 0xC9, 0x20, 0x71, 0xB9, 0xB7, 0xE8, 0x54, 0x06, 0x9E, 0x9E, 0xD7, 0x81, 0x31, 0x37, 0x56, 0x54, 0xD7, 0x37, 0xBE, 0x64, 0xAF,
    0x9E, 0xC8, 0xFA, 0x67, 0x99, 0x4E, 0xFD, 0x58, 0xB6, 0x27, 0xAF, 0x06, 0xDE, 0xCD, 0x00, 0x40, 0xA7, 0x45, 0x3D, 0x2F, 0x0F, 0x91, 0x93, 0x88, 0x06, 0xDF, 0xC3, 0x60, 0x6F, 0x61, 0x26, 0x36,
    0xF9, 0x19, 0xB0, 0x6F, 0x00, 0xAC, 0x73, 0xC2, 0x46, 0xC2, 0xC2, 0x96, 0xF0, 0xF3, 0xF7, 0xEE, 0x3D, 0x4E, 0x97, 0x64, 0xDC, 0x6A, 0x4F, 0xF5, 0xFC, 0x29, 0x05, 0x60, 0xA8, 0x0F, 0x9C, 0xF6,
    0x16, 0xF1, 0xDC, 0xF1, 0x84, 0xFF, 0x47, 0xE1, 0x2A, 0x55, 0x36, 0xC5, 0xB3, 0x1F, 0x8B, 0x38, 0x64, 0xA8, 0x67, 0x31, 0xE2, 0xB9, 0x15, 0x23, 0x6F, 0xD9, 0x9B, 0x68, 0xC8, 0x89, 0xB9, 0xB4,
    0x52, 0xCD, 0x10, 0xAA, 0xC9, 0x94, 0xFF, 0x13, 0xD2, 0x10, 0x7D, 0x03, 0x83, 0x13, 0xD5, 0xD7, 0x23, 0x86, 0xD9, 0x4A, 0x60, 0xDD, 0xA6, 0x24, 0x3E, 0x4E, 0x0F, 0x3B, 0x46, 0xFD, 0x3C, 0xD9,
    0x3B, 0xD7, 0xEC, 0xE4, 0xD1, 0xF5, 0xA4, 0xAF, 0x40, 0xCF, 0x35, 0x76, 0x0F, 0x8F, 0xDC, 0x7D, 0x12, 0x92, 0x0B, 0x79, 0xD9, 0x1E, 0x5C, 0xA7, 0xD7, 0x79, 0x46, 0xA3, 0xC1, 0x42, 0x50, 0x11,
    0x52, 0x77, 0x26, 0xFE, 0x6B, 0x6E, 0xCF, 0xC4, 0x28, 0x64, 0xB2, 0xB2, 0xD8, 0x59, 0xAC, 0x46, 0xB2, 0x0E, 0xAF, 0xD1, 0xC1, 0x3C, 0x02, 0x6A, 0x6E, 0x1C, 0xED, 0xCC, 0x95, 0xCE, 0x1B, 0xFD,
    0x9E, 0xDB, 0x83, 0xBE, 0xBA, 0xAF, 0xC5, 0x98, 0x98, 0x01, 0x71, 0xE1, 0xD3, 0x6E, 0xF4, 0x26, 0x3C, 0x40, 0x5E, 0x84, 0x24, 0xF7, 0x62, 0x31, 0x3C, 0x8E, 0xF1, 0xE6, 0xCF, 0xB5, 0x29, 0x4B,
    0x22, 0xA1, 0xA3, 0xB6, 0xE1, 0x7D, 0xFD, 0xEE, 0x7C, 0x5D, 0x84, 0x4D, 0x7E, 0x94, 0x3A, 0x85, 0x82, 0x19, 0x76, 0xBC, 0x66, 0xD7, 0x91, 0x81, 0x9E, 0x34, 0x5C, 0x05, 0x44, 0xE5, 0x10, 0x06,
    0x24, 0xAC, 0xC7, 0xEF, 0x6D, 0xFB, 0x3E, 0xEB, 0x51, 0x35, 0xD2, 0x51, 0xB1, 0x0D, 0xFD, 0x36, 0x1C, 0x1D, 0x05, 0xE9, 0x7B, 0x99, 0x00, 0x01, 0x57, 0xC9, 0xEF, 0x29, 0xAF, 0x55, 0xBF, 0xC3,
    0x4F, 0x21, 0x6F, 0x18, 0x9F, 0x02, 0x69, 0x1A, 0x1F, 0xD1, 0xAA, 0x97, 0x7B, 0xBA, 0x5D, 0x47, 0xDD, 0xBA, 0x62, 0xD7, 0xB7, 0x07, 0x67, 0x84, 0x75, 0xE4, 0x66, 0x2A, 0xBA, 0x64, 0xDF, 0x7B,
    0x12, 0x1B, 0x2D, 0xC7, 0x16, 0xBC, 0xC4, 0x2A, 0xCD, 0x22, 0xE7, 0xCA, 0x11, 0x21, 0x70, 0x44, 0x9B, 0xA7, 0x61, 0xD7, 0x95, 0x0C, 0x87, 0xE6, 0xBF, 0x27, 0x52, 0xED, 0x5C, 0x14, 0x2C, 0xE6,
    0xBA, 0x00, 0xD4, 0x2E, 0xE7, 0xD6, 0xAA, 0x9E, 0x45, 0x78, 0xA7, 0x21, 0x86, 0xD9, 0x2F, 0x9F, 0x8A, 0x95, 0x42, 0xE0, 0x21, 0x18, 0xBE, 0xDD, 0xD4, 0xF8, 0x9F, 0x13, 0x82, 0xDC, 0xCE, 0x16,
    0x79, 0x22, 0xFA, 0xF9, 0xDC, 0x1C, 0xE2, 0x6F, 0x84, 0xA2, 0x88, 0x82, 0xCE, 0x51, 0xC8, 0x07, 0x61, 0x90, 0x2E, 0x91, 0x69, 0x94, 0x5E, 0xC3, 0xCA, 0x40, 0x7C, 0xE8, 0x14, 0xC2, 0x53, 0xD7,
    0x9D, 0xC5, 0x5A, 0x70, 0x45, 0xF7, 0xD1, 0x15, 0xEB, 0x21, 0xBB, 0x86, 0x03, 0xBB, 0x8A, 0xC3, 0x49, 0x6B, 0x42, 0x7A, 0x50, 0x2A, 0x62, 0x33, 0x36, 0xD4, 0xB7, 0xE3, 0xA9, 0x66, 0xD8, 0x96,
    0x21, 0x34, 0x9F, 0xEF, 0xBA, 0x4D, 0xB2, 0xAE, 0x66, 0x32, 0xFD, 0x3D, 0xD5, 0x47, 0x07, 0x17, 0x4D, 0x55, 0x63, 0x49, 0x54, 0xF8, 0xC6, 0xC4, 0x04, 0xF3, 0xCD, 0xC3, 0x6D, 0xCB, 0x8E, 0x34,
    0x04, 0x86, 0xC0, 0xFA, 0x1F, 0xB7, 0x1E, 0x86, 0x2D, 0xAB, 0xC4, 0xA5, 0x37, 0xEC, 0xD9, 0x77, 0x39, 0x59, 0x98, 0xFF, 0xDF, 0x1D, 0x27, 0xAB, 0xED, 0xA2, 0xF0, 0x7E, 0x4C, 0xF0, 0x2C, 0x74,
    0x73, 0x4E, 0x3B, 0x7D, 0x1D, 0xA6, 0x02, 0x65, 0xB5, 0xE7, 0x5D, 0x09, 0x74, 0x0F, 0x5A, 0xCF, 0x82, 0xF9, 0x74, 0x25, 0xEB, 0x39, 0xA9, 0xC2, 0x01, 0x69, 0x5F, 0x8E, 0xAD, 0x7F, 0x67, 0xC7,
    0x82, 0xB2, 0xC6, 0x72, 0xE7, 0x73, 0xAB, 0xA4, 0x64, 0x9C, 0x0D, 0x2E, 0x28, 0x0D, 0x30, 0x9B, 0x76, 0x54, 0x12, 0xC6, 0xB4, 0xB5, 0xDC, 0xCC, 0x10, 0xB7, 0x12, 0x10, 0x69, 0x0F, 0xE0, 0x14,
    0x6C, 0xD4, 0x2C, 0x56, 0xA8, 0xCB, 0xDC, 0x7B, 0xD5, 0xFE, 0x32, 0x13, 0x99, 0x32, 0x58, 0xA8, 0x89, 0x79, 0xBD, 0x00, 0x87, 0xF0, 0x15, 0xC0, 0xD8, 0xD9, 0x17, 0x55, 0xD1, 0x83, 0xD3, 0xF1,
    0x2E, 0x83, 0x02, 0x81, 0x73, 0xE8, 0xE8, 0x0F, 0x99, 0x50, 0xB5, 0x79, 0x1E, 0x7C, 0x17, 0x21, 0xE9, 0xFA, 0x7C, 0x97, 0x4F, 0xC7, 0x3F, 0x3A, 0x36, 0x12, 0x1B, 0x83, 0xA3, 0x44, 0x82, 0x59,
    0xBE, 0x6B, 0x91, 0xCF, 0xC5, 0x11, 0xBA, 0xB1, 0xF6, 0x77, 0x1E, 0xFC, 0x16, 0x2F, 0x4A, 0x40, 0xDB, 0x9B, 0x16, 0x5D, 0x8D, 0xBB, 0x86, 0x54, 0x15, 0x13, 0x13, 0x15, 0x27, 0x26, 0x2B, 0x4A,
    0x0A, 0xBE, 0x5E, 0x5A, 0xF8, 0xBF, 0xBF, 0x71, 0xB1, 0xA8, 0xD1, 0x03, 0x8F, 0xE4, 0xB3, 0xA4, 0x82, 0x1F, 0x9C, 0x43, 0x57, 0x7B, 0x90, 0x04, 0x5D, 0x69, 0xCB, 0x48, 0x6D, 0x0C, 0x85, 0x0A,
    0xC7, 0x3F, 0x19, 0x18, 0x92, 0xD0, 0x20, 0x49, 0xB2, 0x3D, 0xD8, 0xBD, 0x5E, 0xF8, 0x42, 0x73, 0x14, 0xF3, 0xD5, 0xD1, 0xFE, 0xFD, 0xDB, 0xCA, 0x28, 0x15, 0x86, 0xE4, 0x50, 0x99, 0xD2, 0x7E,
    0xF9, 0x95, 0xAC, 0xBE, 0x8C, 0xC9, 0xEB, 0x1D, 0x85, 0xB7, 0x76, 0x35, 0x0F, 0xF4, 0x68, 0xD7, 0x50, 0x40, 0xF9, 0xBD, 0x72, 0x03, 0x92, 0x4E, 0x16, 0x21, 0x0D, 0x58, 0x8F, 0x63, 0xFB, 0x4F,
    0x1E, 0xD7, 0x36, 0x19, 0x5A, 0xFD, 0xF2, 0x57, 0x59, 0x14, 0x8D, 0x1D, 0x66, 0x47, 0x7E, 0xF9, 0x02, 0x52, 0x3C, 0xA8, 0x9C, 0x36, 0x11, 0x76, 0x1C, 0x41, 0x84, 0xB2, 0x16, 0xD6, 0xCF, 0x38,
    0x3E, 0xB0, 0x40, 0xD9, 0x51, 0x44, 0x73, 0x35, 0x93, 0x39, 0x0A, 0xE9, 0x2C, 0x77, 0x4A, 0x02, 0xDD, 0x07, 0xCE, 0x7A, 0xAD, 0xA5, 0x34, 0x03, 0xFD, 0x08, 0x21, 0x61, 0x82, 0xB7, 0xC5, 0x0D,
    0xC0, 0xEF, 0x2B, 0xB9, 0x90, 0xED, 0x06, 0xF0, 0xA8, 0xC9, 0xB9, 0xCB, 0xF7, 0x38, 0xB9, 0x16, 0x6D, 0x6C, 0x64, 0x8A, 0x18, 0x81, 0x96, 0x31, 0x70, 0xD9, 0x5B, 0xAE, 0x51, 0xBF, 0xC4, 0xED,
    0x7B, 0x6C, 0xAF, 0x14, 0x29, 0xB6, 0x0A, 0x6F, 0xBB, 0xDE, 0x9D, 0xA0, 0x49, 0x5B, 0x39, 0xB4, 0xC0, 0x83, 0x3E, 0x56, 0x18, 0xE8, 0x03, 0xEE, 0xB0, 0x9B, 0x94, 0xF4, 0x70, 0x94, 0xF3, 0x25,
    0xA5, 0x42, 0xC5, 0x2E, 0xD3, 0x09, 0xF1, 0x3B, 0x8E, 0x6C, 0x30, 0x29, 0xD0, 0xD4, 0x62, 0x8C, 0xA3, 0x40, 0x21, 0xFA, 0x93, 0x0E, 0x48, 0x81, 0x20, 0x32, 0x1D, 0xF7, 0xD5, 0xF4, 0x50, 0x64,
    0x68, 0x15, 0x98, 0xFF, 0x3B, 0xD9, 0x64, 0x50, 0x9C, 0x74, 0x0C, 0x25, 0x1E, 0xED, 0xFF, 0x87, 0x84, 0x0B, 0x6D, 0x0F, 0xF3, 0x5E, 0xF9, 0xB6, 0x84, 0x6E, 0x3D, 0xF4, 0x00, 0x37, 0x4D, 0x68,
};