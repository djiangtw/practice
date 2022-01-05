/**
 *     Filename: leet_168_excel_sheet_column_title.c
 *  Description: 168. Excel Sheet Column Title
 *      Version: 1.0
 *      Created: 10:16:39 03-15-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/excel-sheet-column-title/
 */

#include "leet_header.h"
#include "leet_168_excel_sheet_column_title.h"
#include <string.h>

static void str_reverse(char* s)
{
    int sz;
    int i = 0;
    char tmp;
    sz = strlen(s);
    for (i = 0; i < sz / 2; i++) {
        tmp = s[i];
        s[i] = s[sz - i - 1];
        s[sz - i - 1] = tmp;
    }
}

char* convertToTitle(int n)
{
    int sz = 0;
    int n1;
    char* r;
    char* pr;

    if(n < 1)
    {
        return "";
    }

    n1 = n - 1;
    while(n1/26 != 0)
    {
        n1 /= 26;
        sz++;
    }
    sz++;
    r = (char*)malloc(sizeof(char) * sz);

    n1 = n;
    pr = r;
    do
    {
        *pr = (char)((n1 - 1) % 26) + 'A';
        n1 = (n1 - 1) / 26;
        pr++;
    } while(n1 != 0);
    str_reverse(r);
    return r;
}

int leet_168_excel_sheet_column_title_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

