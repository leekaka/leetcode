/*
 * [975] Range Sum of BST
 *
 * https://leetcode.com/problems/range-sum-of-bst/description/
 *
 * algorithms
 * Medium (80.88%)
 * Total Accepted:    19.7K
 * Total Submissions: 24.4K
 * Testcase Example:  '[10,5,15,3,7,null,18]\n7\n15'
 *
 * Given the root node of a binary search tree, return the sum of values of all
 * nodes with value between L and R (inclusive).
 * 
 * The binary search tree is guaranteed to have unique values.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
 * Output: 32
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
 * Output: 23
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * The number of nodes in the tree is at most 10000.
 * The final answer is guaranteed to be less than 2^31.
 * 
 * 
 * 
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
    int rangeSumBST(TreeNode* root, int L, int R) {
	int s=0;
	dfs(root,L,R,s);
	return s;
    }

    void dfs(TreeNode*root,int L,int R,int&s)
    {
	if (!root)return;
	s +=(root->val>=L && root->val<=R ?root->val:0);
	dfs(root->left,L,R,s);
	dfs(root->right,L,R,s);
    }
};
