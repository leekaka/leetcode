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
    int maxDepth(TreeNode* root) {
       queue<TreeNode*>que;    // 使用queue层序遍历
       if(!root)return 0;
       que.push(root);
       int res = 0;
       while(!que.empty())
       {
	   int size = que.size();
	   while(size--)
	   {
	       auto tmp = que.front();
	       que.pop();
	       if(tmp->left)que.push(tmp->left);
	       if(tmp->right)que.push(tmp->right);
	   }
	   res++;
       }
       return res;
    }
};

/*
 * 增加 递归的写法
 * int maxDepth(TreeNode* root)
 * {
 * if(!root)return 0;
 * return max(maxDepth(root->left),maxDepth(root->right)) + 1;
 * }
 */
