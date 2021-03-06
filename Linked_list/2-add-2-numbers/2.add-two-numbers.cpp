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
	    ListNode prehead(0), *p = &prehead;   // 一个指向 链表的指针
	    int extra = 0;
	    while(l1||l2||extra)   // 三者有一个即可
	    {
	     int sum = (l1?l1->val:0) + (l2?l2->val:0) + extra;  // 常用的相加进位方法
	     extra = sum / 10;
	     p->next = new ListNode(sum % 10);
	     p = p->next;
	     l1 = l1?l1->next:l1;               // 链表的迭代 如果有，则下一个链表，否则 则是 本身即可(没有)
	     l2 = l2?l2->next:l2;
	    }
	   return prehead.next; 
        
    }
};
