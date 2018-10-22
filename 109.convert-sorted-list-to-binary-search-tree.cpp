/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
	return sortedbuild( head, NULL );
    }

    TreeNode* sortedbuild(ListNode* head, ListNode* tail)
    {
	if(head == tail) return NULL;
	if(head->next == tail)
	{
	    TreeNode* root = new TreeNode(head->val);
	    return root;
	}

	ListNode* mid = head, *tmp = head;
	while(tmp!=tail && tmp->next!=tail)
	{
	    mid = mid->next;
	    tmp = tmp->next->next;
	}

	TreeNode* root = new TreeNode(mid->val);
	root->left = sortedbuild(head, mid);
	root->right = sortedbuild(mid->next, tail);

	return root;
    }
};
