/*
 * [160] Intersection of Two Linked Lists
 *
 * https://leetcode.com/problems/intersection-of-two-linked-lists/description/
 *
 * algorithms
 * Easy (30.82%)
 * Total Accepted:    246.3K
 * Total Submissions: 798.8K
 * Testcase Example:  'No intersection: []\n[]'
 *
 * Write a program to find the node at which the intersection of two singly
 * linked lists begins.
 * 
 * For example, the following two linked lists: 
 * 
 * A:          a1 → a2
 * ⁠                  ↘
 * ⁠                    c1 → c2 → c3
 * ⁠                  ↗            
 * B:     b1 → b2 → b3
 * 
 * begin to intersect at node c1.
 * 
 * Notes:
 * 
 * If the two linked lists have no intersection at all, return null.
 * The linked lists must retain their original structure after the function
 * returns. 
 * You may assume there are no cycles anywhere in the entire linked structure.
 * Your code should preferably run in O(n) time and use only O(1) memory.
 * 
 * 
 * 
 * Credits:Special thanks to @stellari for adding this problem and creating all
 * test cases.
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
 * 两个不等的线段并起来最后的长度相同，用两个指针同时走就行
 * a1->a2->c1->c2->c3->b1->b2->b3->c1->c2->c3
 * b1->b2->b3->c1->c2->c3->a1->a2->c1->c2->c3
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	ListNode*L1=headA;
	ListNode*L2=headB;
	while(L1&&L2)
	{
	    if(L1->val!=L2->val)
	    {
		L1=L1->next;
		L2=L2->next;
		
		if(!L1&&!L2)return NULL;
		if(!L1)L1=headB;
		if(!L2)L2=headA;
	    }
	    else
	    {
		return L1;
	    }
	}
	return NULL;
    }
};
