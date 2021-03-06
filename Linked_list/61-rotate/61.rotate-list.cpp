/*
 * [61] Rotate List
 *
 * https://leetcode.com/problems/rotate-list/description/
 *
 * algorithms
 * Medium (25.37%)
 * Total Accepted:    155.1K
 * Total Submissions: 611.5K
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * Given a linked list, rotate the list to the right by k places, where k is
 * non-negative.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2->3->4->5->NULL, k = 2
 * Output: 4->5->1->2->3->NULL
 * Explanation:
 * rotate 1 steps to the right: 5->1->2->3->4->NULL
 * rotate 2 steps to the right: 4->5->1->2->3->NULL
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 0->1->2->NULL, k = 4
 * Output: 2->0->1->NULL
 * Explanation:
 * rotate 1 steps to the right: 2->0->1->NULL
 * rotate 2 steps to the right: 1->2->0->NULL
 * rotate 3 steps to the right: 0->1->2->NULL
 * rotate 4 steps to the right: 2->0->1->NULL
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
    ListNode* rotateRight(ListNode* head, int k) {
	ListNode*newHead,*tailHead;       //使用循环立列表
	if(!head)return head;
	int len =1;
	newHead=tailHead=head;
	while(tailHead->next)             //求链表长度
	{
	    tailHead=tailHead->next;
	    len++;
	}

	tailHead->next=head;              // 构成循环链表

	if(k%=len)                        // 当k%len仍有数时，才需要反转
	{
	    for(int i=0;i<len-k;i++)tailHead=tailHead->next;
	}
        
	newHead = tailHead->next;  // 找到新的头位置
	tailHead->next = NULL;

	return newHead;
    }
};
