/*
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (44.07%)
 * Total Accepted:    447.1K
 * Total Submissions: 1M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 * 
 * Example:
 * 
 * Input: 1->2->4, 1->3->4
 * Output: 1->1->2->3->4->4
 * 
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) { //经典的递归算法
	if(!l1)return l2;
	if(!l2)return l1;
	return (l1->val>=l2->val)?(l2->next=mergeTwoLists(l1,l2->next),l2):(l1->next=mergeTwoLists(l1->next,l2),l1);
    }
};
