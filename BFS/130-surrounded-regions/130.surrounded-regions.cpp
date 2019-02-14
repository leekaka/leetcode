/*
 * [130] Surrounded Regions
 *
 * https://leetcode.com/problems/surrounded-regions/description/
 *
 * algorithms
 * Medium (21.85%)
 * Total Accepted:    132.1K
 * Total Submissions: 601.2K
 * Testcase Example:  '[["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]'
 *
 * Given a 2D board containing 'X' and 'O' (the letter O), capture all regions
 * surrounded by 'X'.
 * 
 * A region is captured by flipping all 'O's into 'X's in that surrounded
 * region.
 * 
 * Example:
 * 
 * 
 * X X X X
 * X O O X
 * X X O X
 * X O X X
 * 
 * 
 * After running your function, the board should be:
 * 
 * 
 * X X X X
 * X X X X
 * X X X X
 * X O X X
 * 
 * 
 * Explanation:
 * 
 * Surrounded regions shouldn’t be on the border, which means that any 'O' on
 * the border of the board are not flipped to 'X'. Any 'O' that is not on the
 * border and it is not connected to an 'O' on the border will be flipped to
 * 'X'. Two cells are connected if they are adjacent cells connected
 * horizontally or vertically.
 * 
 */
struct POS
{
    int x;
    int y;
    POS(int newx, int newy):x(newx),y(newy){}
};
class Solution {
public:
    void solve(vector<vector<char>>& board) {
	if (board.empty() || board[0].empty())
	    return ;
	int m = board.size(),n = board[0].size();
	for (int i=0;i<m;i++)
	{
	    for (int j=0;j<n;j++)
	    {
		if (board[i][j] == 'O' && (i==0 || i==m-1 || j ==0 || j== n-1))
		    bfs(board,i,j,m,n);
	    }
	}

	for (int i=0;i<m;i++)
	{
	    for (int j = 0;j<n;j++)
	    {
		if (board[i][j] == 'O')
		    board[i][j] = 'X';
		else if (board[i][j] == '*')
		    board[i][j] = 'O';
	    }
	}
        
    }

    void bfs(vector<vector<char>>&board,int i, int j, int m,int n)
    {
	queue<POS*>que;
	board[i][j] = '*';
	POS* pos = new POS(i,j);
	que.push(pos);
	while(!que.empty())
	{
	    auto cur = que.front();
	    que.pop();
	    if(cur->x>0 && board[cur->x-1][cur->y] == 'O')
	    {
		POS* up = new POS(cur->x-1,cur->y);
		que.push(up);
		board[up->x][up->y] = '*';
	    }
	    if (cur->x<m-1 && board[cur->x+1][cur->y] == 'O')
	    {
		POS* down =  new POS(cur->x+1,cur->y);
		que.push(down);
		board[down->x][down->y] = '*';
	    }
	    if (cur->y>0 && board[cur->x][cur->y-1] == 'O')
	    {
		POS* left = new POS(cur->x,cur->y-1);
		que.push(left);
		board[left->x][left->y] = '*';
	    }
	    if (cur->y<n-1 && board[cur->x][cur->y+1] == 'O')
	    {
		POS* right = new POS(cur->x,cur->y+1);
		que.push(right);
		board[right->x][right->y] = '*';
	    }
	}

    }
};
