# 循环链表需要两个指针
* newhead
* tailhead = hade;

int len = 1;  找到尾巴
while(tailhead)
{
tail=tail->next;
len++
}

tailhead->next = head;    //

if(K%len)for(int i =0;i<len-k;i++)tailhead-=tail->>next

newHead =tailhead->next;
tailhead->next=NULL;
