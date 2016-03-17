/**
 *     Filename: leet_19_remove_nth_node_from_end_of_list.c
 *  Description: 19. Remove Nth Node From End of List
 *      Version: 1.0
 *      Created: 17:04:30 03-17-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 */

#include "leet_header.h"
#include "leet_19_remove_nth_node_from_end_of_list.h"

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
struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode *p, *q;
    p = q = head;
    while(n--)
    {
        q = q->next;
    }
    if(q == NULL)
    {
        p = p->next;
        return p;
    }
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    q = p->next;
    p->next = q->next;

    return head;
}

int leet_19_remove_nth_node_from_end_of_list_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

