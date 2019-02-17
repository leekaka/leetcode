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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) { // 最原始的想法，先求长度，谁长先走谁，之后一起走，直到遇到相同的节点即可
	if(!headA||!headB)return NULL;
	int cntA=0;
	int cntB=0;
	ListNode*LongList=headA;
	ListNode*shortlist=headB;
	while(LongList)
	{
	    cntA++;
	    LongList=LongList->next;
	}
	while(shortlist)
	{
	    cntB++;
	    shortlist=shortlist->next;
	}

	if(cntA>cntB)
	{
	    LongList=headA;
	    shortlist=headB;
	}
	else
	{
	    LongList=headB;
	    shortlist=headA;
	}
	int cha = fabs(cntA-cntB);
	cout<<cha<<endl;
	while(cha)
	{
	    cha--;
	    LongList=LongList->next;
	}

	while(LongList)
	{
	    if(LongList->val==shortlist->val)return LongList;
	    else
	    {
		LongList=LongList->next;
		shortlist=shortlist->next;
	    }
	}
	return NULL;
        
    }
};
