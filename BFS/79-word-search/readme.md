# 广度优先算法
遍历整个二维数组,
找到对的即返回
find(board.word.c_str(),i,j);
使用c_str();函数,使得称为字符指针
对于找过的位置i,j要标注出来,找完这一个之后,要把标注的这个还原
dfs(vector<vector<char>>*board,const char* w, int i,int j)
推出递归的条件:
if(i,j在边界外.且这个已经找过了,或者不等于*w)
找到的条件为:
*(w+1) == '\0',即字符串走完了
