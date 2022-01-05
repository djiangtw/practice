/**
 *     Filename: leet_43_multiply_strings.c
 *  Description: 43. Multiply Strings
 *      Version: 1.0
 *      Created: 14:39:56 02-24-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_43_multiply_strings.h"
#include <string.h>

int size_of_str(char* s)
{
    int ret = 0;
    while(*s != 0)
    {
        ret++;
        s++;
    }
    return ret;
}

int char_to_int(char c)
{
    return c - '0';
}

char int_to_char(int i)
{
    return '0' + i;
}

static void str_reverse(char* s)
{
    int sz;
    int i = 0;
    char tmp;
    sz = size_of_str(s);
    for (i = 0; i < sz / 2; i++) {
        tmp = s[i];
        s[i] = s[sz - i - 1];
        s[sz - i - 1] = tmp;
    }
}

void str_times_ten_eb(char* s)
{
    int sz;
    int i;
    sz = size_of_str(s);
    for (i = 0; i < sz; i++) {
        s[sz - i] = s[sz - i - 1];
    }
    s[0] = '0';
    s[sz + 1] = 0;
}

/* big-endian string add */
void str_add_eb(char* n1, char* n2, char* result)
{
    int i;
    int sz1;
    int sz2;
    int sz;
    int tmp;
    int carry = 0;

    sz1 = size_of_str(n1);
    sz2 = size_of_str(n2);
    sz = (sz1 >= sz2) ? sz1 : sz2;
    for (i = 0; i < sz; i++) {
        tmp = 0;
        if(i < sz1)
        {
            tmp += char_to_int(n1[i]);
        }
        if(i < sz2)
        {
            tmp += char_to_int(n2[i]);
        }
        tmp += carry;
        carry = tmp / 10;
        result[i] = int_to_char(tmp % 10);
    }
    if(carry != 0)
    {
        result[sz] = int_to_char(carry);
        result[sz + 1] = 0;
    }
}

void str_copy(char* s1, char* s2)
{
    while(*s2 != 0)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = 0;
}

/* TODO: remove this function. */
void str_remove_leading_zero_eb(char* s)
{
    int sz;
    int i;

    sz = size_of_str(s);
    for (i = 0; i < sz; i++) {
        if(s[sz - 1 - i] == '0')
            s[sz - 1 - i] = 0;
        else
            break;
    }
}

char* multiply(char* num1, char* num2)
{
    char* result;
    char* tmp;
    int sz_num1;
    int sz_num2;
    int i;
    int j;

    sz_num1 = size_of_str(num1);
    sz_num2 = size_of_str(num2);
    result = (char*)malloc(sizeof(char) * sz_num1 * sz_num2 + 2);
    tmp = (char*)malloc(sizeof(char) * sz_num1 * sz_num2 + 2);
    memset(result, 0, sizeof(char) * sz_num1 * sz_num2 + 2);
    memset(tmp, 0, sizeof(char) * sz_num1 * sz_num2 + 2);

    str_reverse(num1);
    str_reverse(num2);
    str_copy(tmp, num1);
    result[0] = '0';

    if(sz_num1 == 1 && num1[0] == '0')
    {
        return result;
    }
    if(sz_num2 == 1 && num2[0] == '0')
    {
        return result;
    }
    for (i = 0; i < sz_num2; i++) {
        for (j = 0; j < char_to_int(num2[i]); j++) {
            str_add_eb(result, tmp, result);
            /* code */
        }
        str_times_ten_eb(tmp);
    }
    /*str_remove_leading_zero_eb(result);*/
    str_reverse(result);

    free(tmp);
    
    return result;
}

static void test1(void)
{
    char cc[] = "12345678";
    /*printf("%s\n", multiply("12", "34"));*/
    printf("%s\n", cc);
    str_reverse(cc);
    printf("%s\n", cc);
}

static void test2(void)
{
    char cc[10] = "123456";
    printf("%s\n", cc);
    str_times_ten_eb(cc);
    printf("%s\n", cc);
}

static void test3(void)
{
    char cc[10] = "99";
    char dd[10] = "99";
    char ee[10] = {0};
    str_add_eb(cc, dd, ee);
    printf("%s\n", ee);
}

static void test4(void)
{
    static char cc[10] = "99";
    static char dd[10] = "9999";
    static char ee[10] = {0};
    str_reverse(cc);
    str_reverse(dd);
    printf("%s\n", cc);
    printf("%s\n", dd);
    str_add_eb(cc, dd, ee);
    str_reverse(ee);
    printf("%s\n", ee);
}

static void test5(void)
{
    static char cc[10] = "0";
    static char dd[10] = "0";
    char* rr;

    rr = multiply(cc, dd);
    printf("%s\n", rr);
    free(rr);
}

static void test6(void)
{
    static char cc[10] = "7967";
    static char dd[10] = "7067";
    char* rr;

    rr = multiply(cc, dd);
    printf("%s\n", rr);
    free(rr);
}

static void test7(void)
{
    static char cc[20] = "508591";
    static char dd[20] = "41609063";
    char* rr;

    rr = multiply(cc, dd);
    printf("%s\n", rr);
    free(rr);
}
int leet_43_multiply_strings_test(void)
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    /*printf("%s\n", multiply("12", "34"));*/

    return 0;
}

