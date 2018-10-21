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
	return build(preorder,0,pl,inorder,0,il);
    }

    TreeNode* build(vector<int>& preorder,int pstart,int pend,vector<int>& inorder,int istart, int iend)
    {
	if(pstart>pend || istart>iend)return NULL;

	TreeNode* root = new TreeNode(preorder[pstart]);

	int index = 0;
	for(int i = istart;i<=iend;i++)
	{
	    if(preorder[pstart] == inorder[i])
	    {
		index = i;
	    }
	}

	root->left = build(preorder,pstart+1,pstart+index,inorder,istart,index-1);
	root->right = build(preorder,pstart+index-istart+1,pend,inorder,index+1,iend);

	return root;




    }
};
