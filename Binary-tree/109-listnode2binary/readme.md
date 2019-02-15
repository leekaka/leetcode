# 根据ListNode重建BinaryNode
*   ListNode 的head和tail
* 找到中间节点作为bianry的根节点
* return build(head,NULL);
* build(ListNode*head,ListNode*tail)
{
    if (head==tail)  // 没有
    {
	return NULL;
    }

    if (head->next==tail)  //有一个head
    {
	TreeNode* root =  new TreeNode(head->val);
	return root;
    }

    ListNode* mid = head;ListNode* tmp = head;
    while(tmp!=tail && tmp->next!=tail)
    {
	tmp = tmp->next->next;
	mid = mid->next;
    }
    TreeNode* root = new TreeNode(mid->val);
    root->left = build(head,mid);
    root->right = build(mid->next,tail);

    return root;

}
