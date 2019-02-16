/*
 * [77] Combinations
 *
 * https://leetcode.com/problems/combinations/description/
 *
 * algorithms
 * Medium (43.50%)
 * Total Accepted:    162.4K
 * Total Submissions: 373.5K
 * Testcase Example:  '4\n2'
 *
 * Given two integers n and k, return all possible combinations of k numbers
 * out of 1 ... n.
 * 
 * Example:
 * 
 * 
 * Input: n = 4, k = 2
 * Output:
 * [
 * ⁠ [2,4],
 * ⁠ [3,4],
 * ⁠ [2,3],
 * ⁠ [1,2],
 * ⁠ [1,3],
 * ⁠ [1,4],
 * ]
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> combine(int n, int k) {
	if(n<=0||k>n||k<0)return res;
        vector<int>tmp;
	dfs(n,k,1,tmp);
	return res;
    }

    void dfs(int n, int k, int start, vector<int>&tmp)
    {
	if(tmp.size() == k)
	{
	    res.push_back(tmp);
	    return;
	}
	for (int i=start;i<=n;i++)
	{
	    tmp.push_back(i);
	    dfs(n,k,i+1,tmp);
	    tmp.pop_back();
	}
    }
};
