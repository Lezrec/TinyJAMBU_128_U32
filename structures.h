#ifndef STRUCTURES
#define STRUCTURES

#include <stdint.h>

struct b_128 {
    uint32_t bits[4];
};

struct b_96 {
    uint32_t bits[3];
};

struct b_64 {
    uint32_t bits[2];
};

struct b_32 {
    uint32_t bits[1];
};

typedef struct b_128 b_128;
typedef struct b_96 b_96;
typedef struct b_96 b_64;
typedef struct b_96 b_32;



#endif