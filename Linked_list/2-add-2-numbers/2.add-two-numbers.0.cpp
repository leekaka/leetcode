/*
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (29.07%)
 * Total Accepted:    569.7K
 * Total Submissions: 2M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example:
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int extra = 0;
	ListNode* preHead = new ListNode (0);
	ListNode* p = preHead;
//	ListNode preHead(0);ListNode* p = &preHead;
	while(l1||l2||extra)
	{
	    int sum = (l1?l1->val:0)+(l2?l2->val:0)+extra;
	    extra = sum /10;
	    p->next = new ListNode (sum%10);
	    p = p->next;
	    l1 = l1?l1->next:l1;
	    l2 = l2?l2->next:l2;
	}
	return preHead->next;

        
    }
};
