/**
 *     Filename: leet_main.c
 *  Description: leet code entry
 *      Version: 1.0
 *      Created: 09:20:05 02-23-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL:
 */

#include "leet_header.h"
#include "leet_modules.h"

int main(int argc, const char *argv[])
{
    int sn;
    TESTCASE* p_test;

    if(argc == 2)
    {
        sn = atoi(argv[1]);
    }
    else
    {
        return -1;
    }
    printf("%s: test %d\n", __FILE__, sn);

    p_test = test_cases;
    while( p_test->sn != END_OF_TEST_SN)
    {
        if(p_test->sn == sn)
        {
            p_test->test();
            break;
        }
        p_test++;
    }
    if( p_test->sn == END_OF_TEST_SN )
    {
        printf("%s\n", "test case not found!");
    }
    return 0;
}

