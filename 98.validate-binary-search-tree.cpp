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
    bool isValidBST(TreeNode* root) {
	vector<int>result;
	if(root == NULL) return true;
	helper(root,result);

	for(int i = 0;i<result.size()-1;i++)
	{
	    if(result[i] >= result[i+1])
	    {
		return false;
	    }
	}

	return true;
        
    }

    void helper(TreeNode* root,vector<int>&result)
    {
	if(root == NULL)return;
	helper(root->left,result);
	result.push_back(root->val);
	helper(root->right,result);
    }
};
