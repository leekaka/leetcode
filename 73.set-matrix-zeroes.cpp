class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
	int m = matrix.size(), n = matrix[0].size();
	vector<int>row(m,1);
	vector<int>col(n,1);
	for (int i = 0;i < m; i++)
	{
	    for (int j = 0; j< n; j++)
	    {
		if (0 == matrix[i][j])
		{
		    row[i] = 0;
		    col[j] = 0;
		}
	    }
	}


	//清除行
	for (int i = 0; i < m; i++)
	{
	    if(row[i] == 0)
	    {
		for(int j = 0; j < n; j++)
		{
		    matrix[i][j] = 0;
		}
	    }
	}

	//清除列
	for (int j = 0; j < n; j++)
	{
	    if( col[j] == 0)
	    {
		for (int i = 0; i < m;i++)
		{
		    matrix[i][j] = 0;
		}
	    }
	}
    }
};
