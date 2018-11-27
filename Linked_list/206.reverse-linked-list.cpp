/*
 * [206] Reverse Linked List
 *
 * https://leetcode.com/problems/reverse-linked-list/description/
 *
 * algorithms
 * Easy (50.65%)
 * Total Accepted:    454.9K
 * Total Submissions: 897.5K
 * Testcase Example:  '[1,2,3,4,5]'
 *
 * Reverse a singly linked list.
 * 
 * Example:
 * 
 * 
 * Input: 1->2->3->4->5->NULL
 * Output: 5->4->3->2->1->NULL
 * 
 * 
 * Follow up:
 * 
 * A linked list can be reversed either iteratively or recursively. Could you
 * implement both?
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
    ListNode* reverseList(ListNode* head) {
	ListNode*current=head;                    // 迭代法
	ListNode*pre=NULL;
	if(!head)return head;
	while(current)                  
	{
	    ListNode*tmp=current->next;           // 记录下一个节点的指针
	    current->next=pre;
	    pre=current;
	    current=tmp;
	}
	return pre;
    }
};

/*递归算法
 *
 * if(!head||!head->next)
 * {
 *  return head;
 * }
 *
 * ListNode*Node = reverseList(head->next);
 * head->next->next=head;
 * head->next=NULL;
 *
 * return Node;
 *
 *
 * */
