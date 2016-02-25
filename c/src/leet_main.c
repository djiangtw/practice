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
    sn = 171;
    printf("%s\n", "Leet Code Entry");

    switch(sn)
    {
    case 43:
        leet_43_multiply_strings_test();
        break;
    case 171:
        leet_171_excel_sheet_column_number_test();
        break;
    case 217:
        leet_217_contains_duplicate_test();
        break;
    case 231:
        leet_231_power_of_two_test();
        break;
    case 242:
        leet_242_valid_anagram_test();
        break;
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

