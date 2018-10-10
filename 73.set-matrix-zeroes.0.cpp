class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
	int record_row = -1;
	int m = matrix.size(), n = matrix[0].size();
	for (int i = 0; i < m; i++)       //记录一个全部是0的行
	{
	    int j = 0;
	    for(j=0; j < n; j++)
	    {
		if(matrix[i][j] == 0)
		{
		    break;
		}
	    }

	    if(j == n)
	    {
		record_row = i;
		break;
	    }
	}

	if (-1 == record_row)
	{
	    for (int i = 0; i < m; i++)
	    {
		for (int j = 0; j < n;j++)
		{
		    matrix[i][j] = 0;
		}
	    }
	}
	else
	{
	    for (int i = 0; i < m; i++)
	    {
		for( int j = 0; j< n; j++)
		{
		    if(0 == matrix[i][j])
		    {
			matrix[record_row][j] = 0;
		    }
		}
	    }
	}

	for(int i = 0;i<m;i++)
	{
	    if(record_row == i) continue;
	    for(int j = 0;j<n;j++)
	    {
		if(0 == matrix[i][j])
		{
		    for(int j2 = 0;j2<n;j2++)
			matrix[i][j2] = 0;
		}
	    }

	}

	for(int j = 0;j<n; j++)
	{
	    if (0 == matrix[record_row][j])
	    {
		for (int i = 0; i< m ;i++)
		{
		    matrix[i][j] = 0;
		}
	    }
	}
        
    }
};
