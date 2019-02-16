# 经典的题
思路：

声明两个指针first和second，first代表新的数组中最后一个元素的下一个位置，用来表示插入新元素的位置。

second表示当前遍历的元素位置，用来跟前一个元素比较是否相同，然后还需要一个计数器count，来统计相同元素出现的个数。

如果元素出现相同，然后观察此时count大小，如果之前只出现1次，则按正常处理（将当前遍历的元素插入到新位置，由first指出），然后count+1；

如果元素不相同，则置count为1.first与second同时移动。

另外对于更一般情况，允许元素重复次数为k次的

int removeDuplicates(int A[], int n, int k) {

    if (n <= k) return n;
    int i = 1, j = 1;
    int cnt = 1;
    while (j < n) {
    if (A[j] != A[j-1]) {
	cnt = 1;
	A[i++] = A[j];
    }
    else {
	if (cnt < k) {   //当相同的时候,只要计数没有超过,仍然需要同时更新,否则只更新j
	A[i++] = A[j];
	cnt++;
		 }
    }
    ++j;
}
return i;
}
