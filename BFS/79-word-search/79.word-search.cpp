/*
 * [79] Word Search
 *
 * https://leetcode.com/problems/word-search/description/
 *
 * algorithms
 * Medium (30.07%)
 * Total Accepted:    247K
 * Total Submissions: 817.7K
 * Testcase Example:  '[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]\n"ABCCED"'
 *
 * Given a 2D board and a word, find if the word exists in the grid.
 * 
 * The word can be constructed from letters of sequentially adjacent cell,
 * where "adjacent" cells are those horizontally or vertically neighboring. The
 * same letter cell may not be used more than once.
 * 
 * Example:
 * 
 * 
 * board =
 * [
 * ⁠ ['A','B','C','E'],
 * ⁠ ['S','F','C','S'],
 * ⁠ ['A','D','E','E']
 * ]
 * 
 * Given word = "ABCCED", return true.
 * Given word = "SEE", return true.
 * Given word = "ABCB", return false.
 * 
 * 
 */
class Solution {
public:
    int m,n;
    bool exist(vector<vector<char>>& board, string word) {
	m = board.size(),n = board[0].size();
	if (m<0||n<0)return false;
	for (int i=0;i<m;i++)
	{
	    for (int j=0;j<n;j++)
	    {
		if(find(board,word.c_str(),i,j))
		    return true;
	    }
	}
	return false;
    }
    bool find(vector<vector<char>>& board,const char* w,int i, int j)
    {
	if(i<0||i>m-1||j<0||j>n-1||board[i][j]!=*w||board[i][j]=='\0')
	    return false;
	if(*(w+1)=='\0')
	    return true;
	char t = board[i][j];
	board[i][j] = '\0';
	if(find(board,w+1,i+1,j)||find(board,w+1,i-1,j)||find(board,w+1,i,j-1)||find(board,w+1,i,j+1))
	    return true;
	board[i][j]=t;
	return false;


    }
};
