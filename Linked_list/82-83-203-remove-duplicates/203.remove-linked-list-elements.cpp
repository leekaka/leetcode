/*
 * [203] Remove Linked List Elements
 *
 * https://leetcode.com/problems/remove-linked-list-elements/description/
 *
 * algorithms
 * Easy (34.57%)
 * Total Accepted:    188.8K
 * Total Submissions: 545.7K
 * Testcase Example:  '[1,2,6,3,4,5,6]\n6'
 *
 * Remove all elements from a linked list of integers that have value val.
 * 
 * Example:
 * 
 * 
 * Input:  1->2->6->3->4->5->6, val = 6
 * Output: 1->2->3->4->5
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
    ListNode* removeElements(ListNode* head, int val) {
	//pre->next=head;

	if(!head)return NULL;
	
	while(head && head->val==val)
	{
	    head=head->next;
	}

	ListNode*pre=NULL;    //一前一后两个指针，当当前指针等于该值时，前指针指向后一个，跳过当前指针
	ListNode*node=head;
	
	while(node)
	{
	    if(node->val==val)
	    {
		pre->next = node->next;
	    }
	    else
	    {
		pre=node;
	    }
	    node=node->next;
	}

	return head;
    }
};
