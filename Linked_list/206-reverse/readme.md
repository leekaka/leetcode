# 翻转链表两种做法
*   递归
*  两个指针
    pre=NULL  cur=head;
    while(cur)
    tmp = cur->next;
    cur->next=pre;
    pre=cur;
    cur=tmp
return pre;
