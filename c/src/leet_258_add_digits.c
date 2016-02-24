/*
 * =====================================================================================
 *
 *       Filename:  leet_258_add_digits.c
 *
 *    Description:  Add Digits
 *
 *        Version:  1.0
 *        Created:  2016年02月23日 17時36分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "leet_header.h"
#include "leet_258_add_digits.h"

/**
 * @brief 258, Add Digits
 *
 * @param num a given number
 *
 * @return 
 */
int addDigits(int num)
{
    int m, n, sum;
    sum = m = n = num;
    while(m >= 10)
    {
        sum = 0;
        while( n >= 10)
        {
            sum += n % 10;
            n = n / 10;
        }
        sum += n;
        m = n = sum;
    }
    return sum;
}
/**
 * @brief 258, Add Digits, O(1) solution.
 *
 * @param num a given number
 *
 * @return the sum of its digits
 */
int addDigits_1(int num)
{
    return (((num - 1) % 9) + 1);
}

int leet_258_add_digits_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}
