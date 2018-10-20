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
	vector<vector<int>>res;
	queue<TreeNode*>que;
	if(root==NULL)return res;
	else
	    que.push(root);
	while(!que.empty())
	{
	    int size = que.size();
	    vector<int>tmp;
	    for(int i = 0;i<size;i++)
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
