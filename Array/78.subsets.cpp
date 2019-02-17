/*
 * [78] Subsets
 *
 * https://leetcode.com/problems/subsets/description/
 *
 * algorithms
 * Medium (50.30%)
 * Total Accepted:    324.5K
 * Total Submissions: 641.4K
 * Testcase Example:  '[1,2,3]'
 *
 * Given a set of distinct integers, nums, return all possible subsets (the
 * power set).
 * 
 * Note: The solution set must not contain duplicate subsets.
 * 
 * Example:
 * 
 * 
 * Input: nums = [1,2,3]
 * Output:
 * [
 * ⁠ [3],
 * [1],
 * [2],
 * [1,2,3],
 * [1,3],
 * [2,3],
 * [1,2],
 * []
 * ]
 * 
 */
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
	vector<vector<int>>res;
	int n = nums.size();
	vector<int>tmp;
	for(int i=0;i<pow(2,n);i++)
	{
	    for (int j=0;j<n;j++)
	    {
		if(i & 1<<j)tmp.push_back(nums[j]);
	    }
	    res.push_back(tmp);
	    tmp.clear();
	}
	return res;
        
    }
};
