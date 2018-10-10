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
    vector<int> inorderTraversal(TreeNode* root) {
	vector<int>res;
	TreeNode* current = root;
	stack<TreeNode*>stack;
	while(current||!stack.empty())
	{
	    if(current)
	    {
		stack.push(current);
		current = current->left;
	    }
	    else
	    {
		TreeNode* tmp = stack.top();
		res.push_back(tmp->val);
		stack.pop();
		current = tmp->right;
	    }
	}
	return res;
        
    }
};
