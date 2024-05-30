#pragma once

/*
 * The following buffer is an hex dump of extras/test/test_files/test-1k.lzss
 * with the following command `hexdump extras/test/test_files/test-1k.lzss -e '32/1 "0x%02X, ""\n"'`
 */

uint8_t lzssBuffer[] = {
0x80, 0x3F, 0x7A, 0x40, 0x5F, 0xCC, 0x60, 0x4F, 0xEE, 0x30, 0x37, 0xFB, 0x18, 0x23, 0xFF, 0x8C, 0x14, 0x00, 0xC6, 0x0C, 0x00, 0xE3, 0x07, 0x00, 0xB1, 0x84, 0x00, 0x78, 0xC2, 0x40, 0x4C, 0x61,
0x40, 0x2E, 0x30, 0xB0, 0x1B, 0x18, 0x60, 0x0F, 0x8C, 0x34, 0x08, 0xC6, 0x1C, 0x04, 0xE3, 0x0F, 0x02, 0xB1, 0x88, 0x01, 0x78, 0xC4, 0x40, 0xCC, 0x62, 0x40, 0x6E, 0x31, 0x30, 0x3B, 0x18, 0xA0,
0x1F, 0x8C, 0x54, 0x10, 0xC6, 0x2C, 0x08, 0xE3, 0x17, 0x04, 0xB1, 0x8C, 0x02, 0x78, 0xC6, 0x41, 0x4C, 0x63, 0x40, 0xAE, 0x31, 0xB0, 0x5B, 0x18, 0xE0, 0x2F, 0x8C, 0x74, 0x18, 0xC6, 0x3C, 0x0C,
0xE3, 0x1F, 0x06, 0xB1, 0x7E, 0xE2, 0x90, 0x83, 0x98, 0xC8, 0x81, 0xDC, 0x64, 0x60, 0xF6, 0x32, 0x40, 0x7F, 0x19, 0x28, 0x41, 0x8C, 0x98, 0x21, 0xC6, 0x4E, 0x11, 0x63, 0x28, 0x08, 0xF1, 0x94,
0x84, 0x98, 0xCA, 0x82, 0x5C, 0x65, 0x61, 0x36, 0x32, 0xC0, 0x9F, 0x19, 0x68, 0x51, 0x8C, 0xB8, 0x29, 0xC6, 0x5E, 0x15, 0x63, 0x30, 0x0A, 0xF1, 0x98, 0x85, 0x98, 0xCC, 0x82, 0xDC, 0x66, 0x61,
0x76, 0x33, 0x40, 0xBF, 0x19, 0xA8, 0x61, 0x8C, 0xD8, 0x31, 0xC6, 0x6E, 0x19, 0x63, 0x38, 0x0C, 0xF1, 0x9C, 0x86, 0x98, 0xCE, 0x83, 0x5C, 0x67, 0x61, 0xB6, 0x33, 0xC0, 0xDF, 0x19, 0xE8, 0x71,
0x8C, 0xF8, 0x39, 0xC6, 0x7E, 0x1D, 0x63, 0x40, 0x0E, 0xF1, 0xA0, 0x87, 0x98, 0xD0, 0x83, 0xDC, 0x68, 0x61, 0xF6, 0x34, 0x40, 0xFF, 0x1A, 0x28, 0x81, 0x8D, 0x18, 0x41, 0xC6, 0x8E, 0x21, 0x63,
0x48, 0x10, 0xF1, 0xA4, 0x88, 0x98, 0xD2, 0x84, 0x5C, 0x69, 0x62, 0x36, 0x34, 0xC1, 0x1F, 0x1A, 0x68, 0x91, 0x8D, 0x38, 0x49, 0xC6, 0x9E, 0x25, 0x63, 0x50, 0x12, 0xF1, 0xA8, 0x89, 0x98, 0xD4,
0x84, 0xDC, 0x6A, 0x62, 0x76, 0x35, 0x41, 0x3F, 0x1A, 0xA8, 0xA1, 0x8D, 0x58, 0x51, 0xC6, 0xAE, 0x29, 0x63, 0x58, 0x14, 0xF1, 0xAC, 0x8A, 0x98, 0xD6, 0x85, 0x5C, 0x6B, 0x62, 0xB6, 0x35, 0xC1,
0x5F, 0x1A, 0xE8, 0xB1, 0x8D, 0x78, 0x59, 0xC6, 0xBE, 0x2D, 0x63, 0x60, 0x16, 0xF1, 0xB0, 0x8B, 0x98, 0xD8, 0x85, 0xDC, 0x6C, 0x62, 0xF6, 0x36, 0x41, 0x7F, 0x1B, 0x28, 0xC1, 0x8D, 0x98, 0x61,
0xC6, 0xCE, 0x31, 0x63, 0x68, 0x18, 0xF1, 0xB4, 0x8C, 0x98, 0xDA, 0x86, 0x5C, 0x6D, 0x63, 0x36, 0x36, 0xC1, 0x9F, 0x1B, 0x68, 0xD1, 0x8D, 0xB8, 0x69, 0xC6, 0xDE, 0x35, 0x63, 0x70, 0x1A, 0xF1,
0xB8, 0x8D, 0x98, 0xDC, 0x86, 0xDC, 0x6E, 0x63, 0x76, 0x37, 0x41, 0xBF, 0x1B, 0xA8, 0xE1, 0x8D, 0xD8, 0x71, 0xC6, 0xEE, 0x39, 0x63, 0x78, 0x1C, 0xF1, 0xBC, 0x8E, 0x98, 0xDE, 0x87, 0x5C, 0x6F,
0x63, 0xB6, 0x37, 0xC1, 0xDF, 0x1B, 0xE8, 0xF1, 0x8D, 0xF8, 0x79, 0xC6, 0xFE, 0x3D, 0x63, 0x80, 0x1E, 0xF1, 0xC0, 0x8F, 0x98, 0xE0, 0x87, 0xDC, 0x70, 0x63, 0xF6, 0x38, 0x41, 0xFF, 0x1C, 0x29,
0x01, 0x8E, 0x18, 0x81, 0xC7, 0x0E, 0x41, 0x63, 0x88, 0x20, 0xF1, 0xC4, 0x90, 0x98, 0xE2, 0x88, 0x5C, 0x71, 0x64, 0x36, 0x38, 0xC2, 0x1F, 0x1C, 0x69, 0x11, 0x8E, 0x38, 0x89, 0xC7, 0x1E, 0x45,
0x63, 0x90, 0x22, 0xF1, 0xC8, 0x91, 0x98, 0xE4, 0x88, 0xDC, 0x72, 0x64, 0x76, 0x39, 0x42, 0x3F, 0x1C, 0xA9, 0x21, 0x8E, 0x58, 0x91, 0xC7, 0x2E, 0x49, 0x63, 0x98, 0x24, 0xF1, 0xCC, 0x92, 0x98,
0xE6, 0x89, 0x5C, 0x73, 0x64, 0xB6, 0x39, 0xC2, 0x5F, 0x1C, 0xE9, 0x31, 0x8E, 0x78, 0x99, 0xC7, 0x3E, 0x4D, 0x63, 0xA0, 0x26, 0xF1, 0xD0, 0x93, 0x98, 0xE8, 0x89, 0xDC, 0x74, 0x64, 0xF6, 0x3A,
0x42, 0x7F, 0x1D, 0x29, 0x41, 0x8E, 0x98, 0xA1, 0xC7, 0x4E, 0x51, 0x63, 0xA8, 0x28, 0xF1, 0xD4, 0x94, 0x98, 0xEA, 0x8A, 0x5C, 0x75, 0x65, 0x36, 0x3A, 0xC2, 0x9F, 0x1D, 0x69, 0x51, 0x8E, 0xB8,
0xA9, 0xC7, 0x5E, 0x55, 0x63, 0xB0, 0x2A, 0xF1, 0xD8, 0x95, 0x98, 0xEC, 0x8A, 0xDC, 0x76, 0x65, 0x76, 0x3B, 0x42, 0xBF, 0x1D, 0xA9, 0x61, 0x8E, 0xD8, 0xB1, 0xC7, 0x6E, 0x59, 0x63, 0xB8, 0x2C,
0xF1, 0xDC, 0x96, 0x98, 0xEE, 0x8B, 0x5C, 0x77, 0x65, 0xB6, 0x3B, 0xC2, 0xDF, 0x1D, 0xE9, 0x71, 0x8E, 0xF8, 0xB9, 0xC7, 0x7E, 0x5D, 0x63, 0xC0, 0x2E, 0xF1, 0xE0, 0x97, 0x98, 0xF0, 0x8B, 0xDC,
0x78, 0x65, 0xF6, 0x3C, 0x42, 0xFF, 0x1E, 0x29, 0x81, 0x8F, 0x18, 0xC1, 0xC7, 0x8E, 0x61, 0x63, 0xC8, 0x30, 0xF1, 0xE4, 0x98, 0x98, 0xF2, 0x8C, 0x5C, 0x79, 0x66, 0x36, 0x3C, 0xC3, 0x1F, 0x1E,
0x69, 0x91, 0x8F, 0x38, 0xC9, 0xC7, 0x9E, 0x65, 0x63, 0xD0, 0x32, 0xF1, 0xE8, 0x99, 0x98, 0xF4, 0x8C, 0xDC, 0x7A, 0x66, 0x76, 0x3D, 0x43, 0x3F, 0x1E, 0xA9, 0xA1, 0x8F, 0x58, 0xD1, 0xC7, 0xAE,
0x69, 0x63, 0xD8, 0x34, 0xF1, 0xEC, 0x9A, 0x98, 0xF6, 0x8D, 0x5C, 0x7B, 0x66, 0xB6, 0x3D, 0xC3, 0x5F, 0x1E, 0xE9, 0xB1, 0x8F, 0x78, 0xD9, 0xC7, 0xBE, 0x6D, 0x63, 0xE0, 0x36, 0xF1, 0xF0, 0x9B,
0x98, 0xF8, 0x8D, 0xDC, 0x7C, 0x66, 0xF6, 0x3E, 0x43, 0x7F, 0x1F, 0x29, 0xC1, 0x8F, 0x98, 0xE1, 0xC7, 0xCE, 0x71, 0x63, 0xE8, 0x38, 0xF1, 0xF4, 0x9C, 0x98, 0xFA, 0x8E, 0x5C, 0x7D, 0x67, 0x36,
0x3E, 0xC3, 0x9F, 0x1F, 0x69, 0xD1, 0x8F, 0xB8, 0xE9, 0xC7, 0xDE, 0x75, 0x63, 0xF0, 0x3A, 0xF1, 0xF8, 0x9D, 0x98, 0xFC, 0x8E, 0xDC, 0x7E, 0x67, 0x76, 0x3F, 0x43, 0xBF, 0x1F, 0xA9, 0xE1, 0x8F,
0xD8, 0xF1, 0xC7, 0xEE, 0x79, 0x63, 0xF8, 0x3C, 0xF1, 0xFC, 0x9E, 0x98, 0xFE, 0x8F, 0x5C, 0x7F, 0x67, 0xB6, 0x3F, 0xC3, 0xDF, 0x1F, 0xE9, 0xF1, 0x8F, 0xF8, 0xF9, 0xC7, 0xFE,
};