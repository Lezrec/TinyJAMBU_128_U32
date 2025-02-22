#include "structures.h"
#include <stdlib.h>

//LSB = index 0
b_64 *bisect_128(b_128 B) {
    b_64 *return_64 = calloc(2, sizeof(b_64));
    return_64[0].bits[0] = B.bits[0];
    return_64[0].bits[1] = B.bits[1];
    return_64[1].bits[0] = B.bits[2];
    return_64[1].bits[1] = B.bits[3];
    return return_64;
}

b_32 *bisect_64(b_64 B) {
    b_32 *return_32 = calloc(2, sizeof(b_32));
    return_32[0].bits[0] = B.bits[0];
    return_32[1].bits[0] = B.bits[1];
    return return_32;
}

//String of ones and zeroes, char[33], eliminate null terminator
b_32 string_to_32(char *str) {
    uint32_t pow = 1 << 31;
    uint32_t representation = 0;
    for (int i = 0; i < 32; i++) {
        char bit = str[i] - 48;
        if (bit) {
            representation += pow;
        }
        pow = pow >> 1;
    }
    b_32 return_32;
    return_32.bits[0] = representation;
    return return_32;
}

b_64 string_to_64(char *str) {
    uint32_t pow = 1 << 31;
    uint32_t representation_1 = 0;
    uint32_t representation_2 = 0;
    for (int i = 0; i < 32; i++) {
        char bit_1 = str[i] - 48;
        if (bit_1) {
            representation_1 += pow;
        }
        char bit_2 = str[32+i] - 48;
        if (bit_2) {
            representation_2 += pow;
        }
        pow = pow >> 1;
    }
    b_64 return_64;
    return_64.bits[1] = representation_1;
    return_64.bits[0] = representation_2;
    return return_64;
}

b_96 string_to_96(char *str) {
    uint32_t pow = 1 << 31;
    uint32_t representation_1 = 0;
    uint32_t representation_2 = 0;
    uint32_t representation_3 = 0;
    for (int i = 0; i < 32; i++) {
        char bit_1 = str[i] - 48;
        if (bit_1) {
            representation_1 += pow;
        }
        char bit_2 = str[32+i] - 48;
        if (bit_2) {
            representation_2 += pow;
        }
        char bit_3 = str[64+i] - 48;
        if (bit_3) {
            representation_3 += pow;
        }
        pow = pow >> 1;
    }
    b_96 return_96;
    return_96.bits[2] = representation_1;
    return_96.bits[1] = representation_2;
    return_96.bits[0] = representation_3;
    return return_96;
}

b_128 string_to_128(char *str) {
    uint32_t pow = 1 << 31;
    uint32_t representation_1 = 0;
    uint32_t representation_2 = 0;
    uint32_t representation_3 = 0;
    uint32_t representation_4 = 0;
    for (int i = 0; i < 32; i++) {
        char bit_1 = str[i] - 48;
        if (bit_1) {
            representation_1 += pow;
        }
        char bit_2 = str[32+i] - 48;
        if (bit_2) {
            representation_2 += pow;
        }
        char bit_3 = str[64+i] - 48;
        if (bit_3) {
            representation_3 += pow;
        }
        char bit_4 = str[96+i] - 48;
        if (bit_4) {
            representation_4 += pow;
        }
        pow = pow >> 1;
    }
    b_128 return_128;
    return_128.bits[3] = representation_1;
    return_128.bits[2] = representation_2;
    return_128.bits[1] = representation_3;
    return_128.bits[0] = representation_4;
    return return_128;
}

