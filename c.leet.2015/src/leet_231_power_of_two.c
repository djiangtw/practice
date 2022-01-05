/*
 * =====================================================================================
 *
 *       Filename:  leet_231_power_of_two.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月24日 12時10分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "leet_header.h"
#include "leet_231_power_of_two.h"

bool isPowerOfTwo(int n)
{
    if(n <= 0)
    {
        return false;
    }
    while(1)
    {
        if((n % 2) != 0)
        {
            return (n == 1) ? true : false;
        }
        else
        {
            n /= 2;
        }
    }
}

int leet_231_power_of_two_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}
