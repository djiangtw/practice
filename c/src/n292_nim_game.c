/*
 * =====================================================================================
 *
 *       Filename:  n292_nim_game.c
 *
 *    Description:  292, nim game
 *
 *        Version:  1.0
 *        Created:  2016年02月23日 17時05分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "leet_header.h"

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

int n292_nim_game_test(void)
{

}
