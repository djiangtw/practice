/**
 *     Filename: leet_7_reverse_integer.c
 *  Description: 7. Reverse Integer
 *      Version: 1.0
 *      Created: 17:32:14 03-09-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_7_reverse_integer.h"
#include <limits.h>

int reverse(int x)
{
    int a[10] = {0};
    int digits = 0;
    int i;
    long long ret = 0;

    printf("%d\n", x);
    while(x != 0)
    {
        a[digits] = x % 10;
        x /= 10;
        digits++;
    }
    for (i = 0; i < digits; i++) {
        ret *= 10;
        ret += a[i];
    }
    if(ret > INT_MAX || ret < INT_MIN)
    {
        return 0;
    }

    return (int)ret;
}

static void test1(void)
{
    int a = 123456;
    printf("%d\n", a);
    printf("%d\n", reverse(a));
    a = -43878218;
    printf("%d\n", a);
    printf("%d\n", reverse(a));
    a = -2147483648;
    printf("%d\n", a);
    printf("%d\n", reverse(a));

}
int leet_7_reverse_integer_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

