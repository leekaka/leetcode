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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
	vector<vector<int>>res;
	vector<int>tmp;
	findPath(root,sum,tmp,res);
	return res;
    }

    void findPath(TreeNode* root,int sum, vector<int>&tmp,vector<vector<int>>&res)
    {
	if(!root) return;
	tmp.push_back(root->val); 
	if(!(root->left) && !(root->right) && sum == root->val) // 结束的条件，此节点是叶节点，且sum == root->val
	{
	    res.push_back(tmp);
	}
	findPath(root->left,sum-root->val,tmp,res);
	findPath(root->right,sum-root->val,tmp,res);
	tmp.pop_back();  // 当此节点的左右都查过之后，需要把这个节点从tmp 剔除
    }
};
