/*
 * [661] Image Smoother
 *
 * https://leetcode.com/problems/image-smoother/description/
 *
 * algorithms
 * Easy (47.45%)
 * Total Accepted:    29.2K
 * Total Submissions: 61.5K
 * Testcase Example:  '[[1,1,1],[1,0,1],[1,1,1]]'
 *
 * Given a 2D integer matrix M representing the gray scale of an image, you
 * need to design a smoother to make the gray scale of each cell becomes the
 * average gray scale (rounding down) of all the 8 surrounding cells and
 * itself.  If a cell has less than 8 surrounding cells, then use as many as
 * you can.
 * 
 * Example 1:
 * 
 * Input:
 * [[1,1,1],
 * ⁠[1,0,1],
 * ⁠[1,1,1]]
 * Output:
 * [[0, 0, 0],
 * ⁠[0, 0, 0],
 * ⁠[0, 0, 0]]
 * Explanation:
 * For the point (0,0), (0,2), (2,0), (2,2): floor(3/4) = floor(0.75) = 0
 * For the point (0,1), (1,0), (1,2), (2,1): floor(5/6) = floor(0.83333333) = 0
 * For the point (1,1): floor(8/9) = floor(0.88888889) = 0
 * 
 * 
 * 
 * Note:
 * 
 * The value in the given matrix is in the range of [0, 255].
 * The length and width of the given matrix are in the range of [1, 150].
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
	int h = M.size(),w = M[0].size();
	if (h<=0||w<=0)return M;
	vector<vector<int>>retv(h,vector<int>(w,0));
	vector<vector<int>>steps{{-1,1},{-1,0},{-1,-1},{1,1},{1,0},{1,-1},{0,1},{0,-1},{0,0}};
	for (int i=0;i<h;i++)
	{
	    for (int j=0;j<w;j++)
	    {
		int count=0,sum=0;
		for (auto step:steps)
		{
		    if (judgeOk(i+step[0],j+step[1],h,w))
		    {
			count++;
			sum+=M[i+step[0]][j+step[1]];
		    }
		    else
			continue;
		}
		retv[i][j]=sum/count;
	    }
	}
	return retv;
        
    }

    bool judgeOk(int i,int j,int h, int w)
    {
	return i>=0&&i<h&&j>=0&&j<w;
    }
};
