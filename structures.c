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

