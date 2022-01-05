/**
 *     Filename: leet_190_reverse_bits.c
 *  Description: 190. Reverse Bits
 *      Version: 1.0
 *      Created: 11:38:30 02-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_190_reverse_bits.h"
#include <stdint.h>

uint32_t reverseBits(uint32_t n)
{
    int i;
    uint32_t ret = 0;
    uint32_t tmp = 0;
    for (i = 0; i < 32; i++) {
        tmp = n & (1 << i);
        tmp >>= i;
        tmp <<= (31 - i);
        ret = ret | tmp;
    }
    return ret;
}

static void print_bit(uint32_t n)
{
    int i;
    for (i = 0; i < 32; i++) {
        printf("%d", (n & (1 << (31 - i)))? 1: 0);
    }
    printf("\n");
}
static void test1()
{
    uint32_t a = 1;
    uint32_t b = 0xff0000;
    uint32_t c = 3;
    print_bit(a);
    print_bit(reverseBits(a));
    print_bit(b);
    print_bit(reverseBits(b));
    print_bit(c);
    print_bit(reverseBits(c));
}
int leet_190_reverse_bits_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

