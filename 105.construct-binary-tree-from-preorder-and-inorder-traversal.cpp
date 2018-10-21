/*
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
	int pl = preorder.size()-1, il = inorder.size()-1;
	if(pl<0||il<0)return NULL;

	return build(preorder,0,inorder,0,il);
    }

    TreeNode* build(vector<int>& preorder,int pstart,vector<int>& inorder,int istart, int iend)
    {
	if(istart>iend)return NULL;

	TreeNode* root = new TreeNode(preorder[pstart]);

	int index = 0;
	for(int i = istart;i<=iend;i++)
	{
	    if(preorder[pstart] == inorder[i])
	    {
		index = i;
	    }
	}

	root->left = build(preorder,pstart+1,inorder,istart,index-1);
	root->right = build(preorder,pstart+index-istart+1,inorder,index+1,iend);

	return root;




    }
};
