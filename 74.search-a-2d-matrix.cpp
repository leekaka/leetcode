class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
	// [row][col] = row * n + col
	
	if(matrix.empty() || matrix[0].empty()) return false;
	int m = matrix.size(), n = matrix[0].size();
	int start = 0, end = m*n-1;
	while(start <= end)
	{
	    int mid = start + (end - start)/2;
	    int e = matrix[mid/n][mid%n];
	    if(e == target) return true;
	    else if(e > target) end = mid -1;
	    else start = mid + 1;

	}
	return false;
        
    }
};
