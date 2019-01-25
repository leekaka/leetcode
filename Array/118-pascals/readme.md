# 杨辉三角形的经典解法
for (int i=0;i<n;i++)
vector<int>res(i+1,1) // 先每层都是1
for (int j=1;j<i;j++)
{
    res[i][j] = res[i-1][j-1] + res[i-1][j]   //上一层的两个数相加
}
