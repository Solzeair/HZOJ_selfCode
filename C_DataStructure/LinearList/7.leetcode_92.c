/*************************************************************************
	> File Name: 7.leetcode_92.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 25 Feb 2025 10:53:00 PM CST
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if (left == 1 && right == 1) return head;
    if (left != 1) {
        head->next = reverseBetween(head->next, left - 1, right - 1);
    } else {
        struct ListNode *tail = head->next, *newHead;
        newHead = reverseBetween(head->next, left, right - 1);
        head->next = tail->next;
        tail->next = head;
        head = newHead;
    }
    return head;
}
