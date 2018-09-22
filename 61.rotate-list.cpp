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
	ListNode*newhead,*tailhead;
	if(!head)return head;
	int len = 1;
	newhead = tailhead = head;
	while(tailhead->next)   //求长度
	{
	    tailhead = tailhead ->next;
	    len++;
	}

	tailhead->next = head;   //循环链表

	if(k %= len)
	{
	    for(int i = 0;i<len-k;i++)tailhead = tailhead->next; //反转K个，则需要往前走len-k次
	}

	newhead = tailhead->next;　
	tailhead->next = NULL;   //尾巴指向空指针
	return newhead;


    }
};
