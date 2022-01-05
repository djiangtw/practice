/**
 *     Filename: leet_328_odd_even_linked_list.c
 *  Description: 328. Odd Even Linked List
 *      Version: 1.0
 *      Created: 11:08:52 03-14-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/odd-even-linked-list/
 */

#include "leet_header.h"
#include "leet_328_odd_even_linked_list.h"

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode_t;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head)
{
    struct ListNode* head_odd;
    /*struct ListNode* head_even;*/
    struct ListNode* p_odd;
    struct ListNode* p_even;;

    if(head == NULL)
    {
        return head;
    }

    p_even = head;
    head_odd = p_odd = head->next;

    while(p_odd != NULL && p_odd->next != NULL)
    {
        p_even->next = p_odd->next;
        p_even = p_even->next;
        p_odd->next = p_even->next;
        p_odd = p_odd->next;
    }
    p_even->next = head_odd;
    return head;
}

int leet_328_odd_even_linked_list_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

