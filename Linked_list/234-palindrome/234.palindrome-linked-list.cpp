/*
 * [234] Palindrome Linked List
 *
 * https://leetcode.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (34.53%)
 * Total Accepted:    207.6K
 * Total Submissions: 600.8K
 * Testcase Example:  '[1,2]'
 *
 * Given a singly linked list, determine if it is a palindrome.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2
 * Output: false
 * 
 * Example 2:
 * 
 * 
 * Input: 1->2->2->1
 * Output: true
 * 
 * Follow up:
 * Could you do it in O(n) time and O(1) space?
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
    bool isPalindrome(ListNode* head) {
	if(!head || !head->next)return true;
	ListNode*slow=head;
	ListNode*fast=head;
	while(fast->next && fast->next->next) // 中间节点为前一个，相对于876来说
	{
	    slow=slow->next;
	    fast=fast->next->next;
	}

	slow->next = reverseList(slow->next);  //  利用了翻转链表
	slow = slow->next;
	while(slow)
	{
	    if(slow->val!=head->val)return false;
	    slow=slow->next;
	    head=head->next;
	}
	return true;
    }

    ListNode* reverseList(ListNode*head)
    {
	ListNode*pre=NULL;
	ListNode*cur=head;
	if(!head)return head;
	while(cur)
	{
	    ListNode*tmp=cur->next;
	    cur->next=pre;
	    pre=cur;
	    cur=tmp;
	}
	return pre;
    }

};
