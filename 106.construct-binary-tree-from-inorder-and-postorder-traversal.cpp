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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
	int isize = inorder.size()-1;
	int psize = postorder.size()-1;
	if(isize < 0 || psize < 0)return NULL;
	return build(inorder,0,isize,postorder,psize);
    }

    TreeNode* build(vector<int>&inorder,int istart, int iend,vector<int>&postorder, int pend)
    {
	if(istart > iend || 0 > pend) return NULL;

	TreeNode* root = new TreeNode (postorder[pend]);

	int index = 0;
	for(int i = istart;i<= iend;i++)
	{
	    if(inorder[i] == postorder[pend])
	    {
		index = i;
		break;
	    }
	}

	root -> left = build(inorder,istart,index-1,postorder,pend - (iend - index)-1);
	root -> right = build(inorder,index+1,iend,postorder,pend-1);

	return root;
    }

};
