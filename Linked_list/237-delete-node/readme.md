# 删除链表中的一个节点
auto  tmp = node->next;
*node = *tmp;
delete tmp;
