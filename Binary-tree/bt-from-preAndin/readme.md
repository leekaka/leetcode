# 从前序遍历和中序遍历中重建二叉树,就得知道前序中序的特点
所谓前中后指的是根节点的相对位置
假如二叉树如下所示:
	    5
	2        9 
    1	    3  7    12

则 前序: 5 2 1 3 9 7 12
   中序: 1 2 3 5 9 1 12

则 重建步骤如下:
    * 可见前序的第一个,即是根节点,
    * 在中序遍历中,找到此节点
    * 中序遍历此节点的前面节点,即是左子树,同理,后边都是右子树

	* rebuild(pre,pstart,in,istart,iend);//即每次重建需要用到pre的起始节点和in的始末节点
	* node = new pre[start];
	* pre[start] == in[i] ==> index = i;   //找到中序排列中节点的位置
	* node.left = rebuild(pre,start+1,in,istart,index-1);
	* node.right = rebuild(pre,start + index-istart+1,in,index+1,iend);


    
	
