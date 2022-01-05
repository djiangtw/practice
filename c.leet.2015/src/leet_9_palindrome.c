/**
 *     Filename: leet_9_palindrome.c
 *  Description: 9. Palindrome Number
 *      Version: 1.0
 *      Created: 11:02:07 03-09-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_9_palindrome.h"

bool isPalindrome(int x)
{
    int a[10] = {0};
    int i;
    int j;

    if(x < 0)
    {
        return false;
    }
    i = 0;
    while(x != 0)
    {
        a[i] = x % 10;
        x /= 10;
        i++;
    }
    for (j = 0; j < i / 2; j++) {
        if(a[j] != a[i - j - 1])
        {
            return false;
        }
    }
    return true;
}

static void test1(void)
{
    bool a;
    a = isPalindrome(123454321);
    printf("%d\n", a);
    a = isPalindrome(-12321);
    printf("%d\n", a);
    a = isPalindrome(-12345);
    printf("%d\n", a);
}

int leet_9_palindrome_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

