/*
 * [90] Subsets II
 *
 * https://leetcode.com/problems/subsets-ii/description/
 *
 * algorithms
 * Medium (39.52%)
 * Total Accepted:    162.2K
 * Total Submissions: 410.4K
 * Testcase Example:  '[1,2,2]'
 *
 * Given a collection of integers that might contain duplicates, nums, return
 * all possible subsets (the power set).
 * 
 * Note: The solution set must not contain duplicate subsets.
 * 
 * Example:
 * 
 * 
 * Input: [1,2,2]
 * Output:
 * [
 * ⁠ [2],
 * ⁠ [1],
 * ⁠ [1,2,2],
 * ⁠ [2,2],
 * ⁠ [1,2],
 * ⁠ []
 * ]
 * 
 */
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       int len = nums.size();
       vector<vector<int>>res;
       if(len<1)return res;
       vector<int>tmp;
       res.push_back(tmp);  //空集
       sort(nums.begin(),nums.end());
       for(int i=1;i<=len;i++)
       {
	   dfs(nums,res,tmp,i,0);
       }
       return res;
    }

    void dfs(vector<int>&nums,vector<vector<int>>&result,vector<int>&tmp,int depth,int start)
    {
	if(tmp.size()==depth)
	{
	    result.push_back(tmp);
	    return;
	}

	for(int i=start;i<nums.size();i++)
	{
	    if(i!=start && nums[i]==nums[i-1])continue;
	    tmp.push_back(nums[i]);
	    dfs(nums,result,tmp,depth,i+1);
	    tmp.pop_back();
	}
    }
};
