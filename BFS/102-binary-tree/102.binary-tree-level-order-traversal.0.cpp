/*
 * [102] Binary Tree Level Order Traversal
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal/description/
 *
 * algorithms
 * Medium (45.05%)
 * Total Accepted:    288.5K
 * Total Submissions: 640.3K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, return the level order traversal of its nodes' values.
 * (ie, from left to right, level by level).
 * 
 * 
 * For example:
 * Given binary tree [3,9,20,null,null,15,7],
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 
 * 
 * return its level order traversal as:
 * 
 * [
 * ⁠ [3],
 * ⁠ [9,20],
 * ⁠ [15,7]
 * ]
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
    vector<vector<int>> levelOrder(TreeNode* root) {
	vector<vector<int>> res;
	queue<TreeNode*> que;
	if (!root)return res;
	else que.push(root);
	
	while(!que.empty())
	{
	    int size = que.size();
	    vector<int>tmp;
	    for (int i=0;i<size;i++)
	    {
		auto node = que.front();
		que.pop();
		tmp.push_back(node->val);
		if(node->left)que.push(node->left);
		if(node->right)que.push(node->right);
	    }
	    res.push_back(tmp);
	}
	return res;
    }
};
