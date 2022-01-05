/**
 *     Filename: leet_206_reverse_linked_list.c
 *  Description: 206. Reverse Linked List
 *      Version: 1.0
 *      Created: 17:37:35 03-14-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/reverse-linked-list/
 */

#include "leet_header.h"
#include "leet_206_reverse_linked_list.h"

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* p;
    struct ListNode* q;
    /*struct ListNode* tmp;*/

    q = NULL;
    while(head != NULL)
    {
        p = head->next;
        head->next = q;
        q = head;
        head = p;
    }
    return q;
}

int leet_206_reverse_linked_list_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

