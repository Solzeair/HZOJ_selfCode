/*************************************************************************
	> File Name: 1.leetcode_206.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 25 Feb 2025 06:18:03 PM CST
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* 反转链表 虚拟头
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode newNode, *p = head, *q;
    newNode.next = NULL;
    while (p) {
        q = p->next; 
        p->next = newNode.next;
        newNode.next = p;
        p = q;
    }
    return newNode.next;
}
*/

// 较难 递归 结构定义法
// 最后一次递归，头节点之后的节点反转完毕，反转该头节点
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    // 找到本次递归该反转的节点
    struct ListNode *tail = head->next;
    // 该节点(head->next)后的节点都反转完毕
    struct ListNode *newNode = reverseList(head->next);
    // 反转该节点
    head->next = tail->next;
    tail->next = head;
    return newNode;
}
