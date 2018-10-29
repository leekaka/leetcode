class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
	
	vector<int> tmp = triangle[triangle.size()-1];  // 第一步复制最后一行

	for(int i = triangle.size()-2;i>=0;--i)
	{
	    for(int j = 0;j<triangle[i].size();j++)
	    {
		tmp[j] = triangle[i][j] + min(tmp[j],tmp[j+1]);  // 最小的 只能是 相邻的
	    }
	}

	return tmp[0];
        
    }
};
