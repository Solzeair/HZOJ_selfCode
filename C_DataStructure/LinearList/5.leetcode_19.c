/*************************************************************************
	> File Name: 5.leetcode_19.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 25 Feb 2025 09:49:25 PM CST
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode newNode, *p = &newNode, *q = p;
    newNode.next = head;
    for (int i = 0; i <= n; i++) q = q->next;
    while (q) p = p->next, q = q->next;
    p->next = p->next->next;
    return newNode.next;
}
