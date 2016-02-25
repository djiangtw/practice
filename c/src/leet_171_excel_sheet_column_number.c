/**
 *     Filename: leet_171_excel_sheet_column_number.c
 *  Description: 171. Excel Sheet Column Number
 *      Version: 1.0
 *      Created: 12:37:06 02-25-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_171_excel_sheet_column_number.h"

/**
 * @brief Given a column title as appear in an Excel sheet, return its corresponding 
 *        column number. For example,
 *          "A"  -> 1
 *          "B"  -> 2
 *          "AA" -> 27
 *          "AB" -> 28
 *
 * @param s
 *
 * @return 
 */
int titleToNumber(char* s)
{
    int ret = 0;
    while(*s != 0)
    {
        ret *= 26;
        ret += *s - 'A' + 1;
        s++;
    }
    return ret;
}

int leet_171_excel_sheet_column_number_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

