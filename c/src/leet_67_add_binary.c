/**
 *     Filename: leet_67_add_binary.c
 *  Description: 67. Add Binary
 *      Version: 1.0
 *      Created: 14:08:11 03-07-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_67_add_binary.h"
#include <string.h>

static void str_reverse(char* s)
{
    int sz;
    int i = 0;
    char tmp;
    sz = strlen(s);
    for (i = 0; i < sz / 2; i++) {
        tmp = s[i];
        s[i] = s[sz - i - 1];
        s[sz - i - 1] = tmp;
    }
}

char* addBinary(char* a, char* b)
{
    char* ret;
    char* p;
    int sz_a, sz_b;
    int max_len;
    char carry;

    sz_a = strlen(a);
    sz_b = strlen(b);
    max_len = (sz_a >= sz_b) ? sz_a : sz_b;
    max_len++;
    
    ret = (char*)malloc(sizeof(char) * max_len);
    memset(ret, 0, sizeof(char) * max_len);
    str_reverse(a);
    str_reverse(b);
    /*printf("%s\n", a);*/
    /*printf("%s\n", b);*/
    carry = 0;
    p = ret;
    while(*a != 0 || *b != 0)
    {
        if(*a != 0)
        {
            *p = *p + *a - '0';
            a++;
        }
        if(*b != 0)
        {
            *p = *p + *b - '0';
            b++;
        }
        *p += carry;
        carry = *p / 2;
        *p = *p % 2;
        *p += '0';
        p++;
    }
    if(carry == 1)
    {
        *p = '1';
    }

    str_reverse(ret);
    return ret;
}

static void test1(void)
{
    char a[] = "111000";
    char b[] = "1111";
    char* s;

    s = addBinary(a, b);
    printf("%s\n", s);
    free(s);
}

static void test2(void)
{
    char a[] = "11100000101010001011010101111111101101100101100001100";
    char b[] = "1000100011000110111110010001100000110111011001010111110110000010101110110010100";
    char* s;

    s = addBinary(a, b);
    printf("%s\n", s);
    free(s);
}
int leet_67_add_binary_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    return 0;
}

