#include <stdio.h>
#include "structures.h"
#include "string.h"

int main() {
    char *test_str = "10001001010111011110011010011111";
    b_32 str_to_32 = string_to_32(test_str);
    printf("%s\n", test_str);
    printf("%lld\n", str_to_32);

    char *test_str_2 = "1000100101011101111001101001111101111110110111001101111110011000";
    b_64 str_to_64 = string_to_64(test_str_2);
    printf("Left half is %lld, right half is %lld\n", str_to_64.bits[1], str_to_64.bits[0]);

    char *test_str_3 = "01100110011010010110111110000010111010101001011111001001110010110010011110000101111110000111111011100101000110110101001111111101";
    b_128 str_to_128 = string_to_128(test_str_3);
    printf("Quarter one is %lld, quarter two is %lld, quarter three is %lld, quarter four is %lld", str_to_128.bits[3], 
    str_to_128.bits[2], str_to_128.bits[1], str_to_128.bits[0]);

    return 0;
}