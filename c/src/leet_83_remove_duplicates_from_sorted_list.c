/**
 *     Filename: leet_83_remove_duplicates_from_sorted_list.c
 *  Description: 83. Remove Duplicates from Sorted List
 *      Version: 1.0
 *      Created: 17:05:03 03-11-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 */

#include "leet_header.h"
#include "leet_83_remove_duplicates_from_sorted_list.h"

typedef struct ListNode {
     int val;
     struct ListNode *next;
 }ListNode_t;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* cc;
    struct ListNode* next;

    cc = head;
    if(cc == NULL)
    {
        return head;
    }
    while(cc->next != NULL)
    {
        next = cc->next;
        while(cc->val == next->val)
        {
            cc->next = next->next;
            next = cc->next;
            if(next == NULL)
            {
                return head;
            }
        }
        cc = next;
    }
    return head;
}


int leet_83_remove_duplicates_from_sorted_list_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

