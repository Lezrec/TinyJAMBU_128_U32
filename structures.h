#ifndef STRUCTURES
#define STRUCTURES

#include <stdint.h>
#include <string.h>

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
typedef struct b_64 b_64;
typedef struct b_32 b_32;


b_64 *bisect_128(b_128 B);
b_32 *bisect_64(b_64 B);


b_32 string_to_32(char *str);
b_64 string_to_64(char *str);
b_96 string_to_96(char *str);
b_128 string_to_128(char *str);

#endif