/*
 * [109] Convert Sorted List to Binary Search Tree
 *
 * https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/
 *
 * algorithms
 * Medium (37.75%)
 * Total Accepted:    148.8K
 * Total Submissions: 394.1K
 * Testcase Example:  '[-10,-3,0,5,9]'
 *
 * Given a singly linked list where elements are sorted in ascending order,
 * convert it to a height balanced BST.
 * 
 * For this problem, a height-balanced binary tree is defined as a binary tree
 * in which the depth of the two subtrees of every node never differ by more
 * than 1.
 * 
 * Example:
 * 
 * 
 * Given the sorted linked list: [-10,-3,0,5,9],
 * 
 * One possible answer is: [0,-3,9,-10,null,5], which represents the following
 * height balanced BST:
 * 
 * ⁠     0
 * ⁠    / \
 * ⁠  -3   9
 * ⁠  /   /
 * ⁠-10  5
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
	return buildTreeNode(head,NULL);
    }

    TreeNode* buildTreeNode(ListNode*head,ListNode*tail) // 首尾中 三个链表
    {
	if(head == tail) return NULL;
	if(head->next == tail)
	{
	    TreeNode* root = new TreeNode(head->val);
	    return root;
	}

	ListNode* mid=head,*tmp = head;
	while(tmp!=tail && tmp->next!=tail)
	{
	    tmp = tmp->next->next;
	    mid = mid->next;
	}

	TreeNode* root = new TreeNode(mid->val);
	root->left = buildTreeNode(head,mid);
	root->right = buildTreeNode(mid->next,tail);

	return root;

    }
};
