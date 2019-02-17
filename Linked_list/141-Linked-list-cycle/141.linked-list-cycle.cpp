/*
 * [141] Linked List Cycle
 *
 * https://leetcode.com/problems/linked-list-cycle/description/
 *
 * algorithms
 * Easy (34.59%)
 * Total Accepted:    324.2K
 * Total Submissions: 937.2K
 * Testcase Example:  '[]\nno cycle'
 *
 * 
 * Given a linked list, determine if it has a cycle in it.
 * 
 * 
 * 
 * Follow up:
 * Can you solve it without using extra space?
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
    bool hasCycle(ListNode *head) {   // 如果是环表的话，意味着一直打转?
	ListNode*fast = head;
	while(head)
	{
	    head=head->next;
	    if(fast->next && fast->next->next)
	    {
		fast=fast->next->next;
	    }
	    else

		return false;                         // 当fast能走完，则返回false

	    if(head == fast)return true;              // 判断是否有相等的时候
	}
	return false;
    }
};
