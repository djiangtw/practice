/**
 *     Filename: leet_204_count_primes.c
 *  Description: 204. Count Primes
 *      Version: 1.0
 *      Created: 10:59:23 03-07-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_204_count_primes.h"

bool is_prime(int n)
{
    int i;

    if(n <= 1)
    {
        return false;
    }
    else if(n <= 3)
    {
        return true;
    }

    if(n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (i = 5; i*i <= n; i+=6) {
        if(n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimes(int n)
{
    int i;
    int count;

    count = 0;
    for (i = 0; i < n; i++) {
        if(is_prime(i))
        {
            count++;
        }
    }
    return count;
}

static void test1(void)
{
    int n = 10;
    printf("1 - %d has %d prime numbers.\n", n, countPrimes(n));
}

static void test2(void)
{
    int n = 499789;
    printf("1 - %d has %d prime numbers.\n", n, countPrimes(n));
}

static void test3(void)
{
    int n = 100;
    printf("1 - %d has %d prime numbers.\n", n, countPrimes(n));
}

int leet_204_count_primes_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    test3();
    return 0;
}

