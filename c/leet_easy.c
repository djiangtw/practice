/*
 * =====================================================================================
 *
 *       Filename:  leet_easy.c
 *
 *    Description:  Easy part of Leet Code
 *
 *        Version:  1.0
 *        Created:  2016年02月23日 10時28分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


/*  \brief  292 Nim Game
 *          You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.
 *          Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.
 *          For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.
 *  \param  n       the number of stones
 *  \return bool. true, win; false, lose.
 */
bool canWinNim(int n)
{
    return ((n % 4) > 0);
}

/* 
 *
 *
 */
// Forward declaration of isBadVersion API.
/*#define ANSWER  55*/
#define ANSWER  1702766719
bool isBadVersion(int version)
{
    if(version >= ANSWER) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int firstBadVersion(int n) {
    int left = 1;
    int right = n;
    int middle;
    if(isBadVersion(right) != true)
    {
        return right;
    }

    while (left <= right)
    {
        /*
         *  don't use,
         *      middle = (left + right) / 2;
         *  there will be an overflow issue when the first bad version is closed to the upper limit of integer.
         */
        middle = left + (right - left) / 2;
        printf("%d\n", middle);
        if(isBadVersion(middle))
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    return left;
}

int addDigits(int num) {
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
