/*
 * =====================================================================================
 *
 *       Filename:  leet_main.c
 *
 *    Description:  leet code entry
 *
 *        Version:  1.0
 *        Created:  2016年02月23日 09時20分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "leet_header.h"
#include "leet_modules.h"

int main(int argc, const char *argv[])
{
    int sn = 258;
    sn = 326;
    printf("%s\n", "Leet Code Entry");

    switch(sn)
    {
    case 258:
        leet_258_add_digits_test();
        break;
    case 263:
        leet_263_ugly_number_test();
        break;
    case 326:
        leet_326_power_of_three_test();
        break;
    default:
        break;
    }
    /*
     *printf("%d\n", firstBadVersion(1));
     *printf("%d\n", firstBadVersion(2));
     *printf("%d\n", firstBadVersion(60));
     *printf("%d\n", firstBadVersion(2126753390));
     */
    /*printf("%d\n", addDigits(38));*/
    /*printf("%s\n", isHappy(19)? "true" : "false");*/
    /*printf("%s\n", isHappy(28)? "true" : "false");*/
    /*printf("%s\n", isHappy(11)? "true" : "false");*/
    /*printf("%s\n", isHappy(13)? "true" : "false");*/
    return 0;
}

