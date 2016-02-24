/*
 * =====================================================================================
 *
 *       Filename:  leet_263_ugly_number.c
 *
 *    Description:  263 ugly number
 *
 *        Version:  1.0
 *        Created:  2016年02月24日 10時37分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "leet_header.h"
#include "leet_263_ugly_number.h"

bool isUgly(int num)
{
    if(num <= 0)
    {
        return false;
    }
    while(num % 2 == 0)
    {
        num /= 2;
    }
    while(num % 3 == 0)
    {
        num /= 3;
    }
    while(num % 5 == 0)
    {
        num /= 5;
    }
    return (num == 1) ? true : false;
}

int leet_263_ugly_number_test(void)
{
    printf("%s\n", (isUgly(0) == true) ? "true" : "false");
    printf("%s\n", (isUgly(6) == true) ? "true" : "false");
    printf("%s\n", (isUgly(8) == true) ? "true" : "false");
    printf("%s\n", (isUgly(14) == true) ? "true" : "false");
    printf("%s\n", __FILE__);
    return 0;
}
