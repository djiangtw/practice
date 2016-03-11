/**
 *     Filename: leet_237_delete_node_in_a_linked_list.c
 *  Description: 237. Delete Node in a Linked List
 *      Version: 1.0
 *      Created: 14:14:02 03-11-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/delete-node-in-a-linked-list/
 */

#include "leet_header.h"
#include "leet_237_delete_node_in_a_linked_list.h"

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
void deleteNode(struct ListNode* node) {
    struct ListNode* next;
    next = node->next;
    node->val = next->val;
    node->next = next->next;
}

int leet_237_delete_node_in_a_linked_list_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

