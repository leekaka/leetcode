/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
 * 和105题类似，注意的是后序遍历中，根节点是最后一个点，而105题的前序遍历，根节点是第一个点，注意边界条件
 * 只需要中序遍历的始末位置即可
 * */

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
	int isize = inorder.size()-1, psize = postorder.size()-1;
	if(isize < 0 || psize < 0)return NULL;
	return build(inorder,0,isize,postorder,psize);
    }

    TreeNode* build(vector<int>&inorder,int istart, int iend,vector<int>&postorder, int pend)
    {
	if(istart > iend) return NULL;

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
