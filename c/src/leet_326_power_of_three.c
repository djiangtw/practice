/*
 * =====================================================================================
 *
 *       Filename:  leet_326_power_of_three.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月24日 11時31分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "leet_header.h"
#include "leet_326_power_of_three.h"
bool isPowerOfThree(int n)
{
    if(n <= 0)
    {
        return false;
    }
    while(1)
    {
        if((n % 3) != 0)
        {
            return (n == 1)? true : false;
        }
        else
        {
            n /= 3;
        }
    }
}

int leet_326_power_of_three_test(void)
{
    return 0;
}
