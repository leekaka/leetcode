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
	queue<TreeNode*>que;   // 层序遍历 肯定是BFS,那就要用到 queue
	if(root==NULL)return res;
	else
	    que.push(root);
	while(!que.empty())
	{
	    int size = que.size();    // 每次取值之前，先看下que的大小，即层的大小。只取这些次
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
