/*
 * [15] 3Sum
 *
 * https://leetcode.com/problems/3sum/description/
 *
 * algorithms
 * Medium (22.73%)
 * Total Accepted:    457.3K
 * Total Submissions: 2M
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * Given an array nums of n integers, are there elements a, b, c in nums such
 * that a + b + c = 0? Find all unique triplets in the array which gives the
 * sum of zero.
 * 
 * Note:
 * 
 * The solution set must not contain duplicate triplets.
 * 
 * Example:
 * 
 * 
 * Given array nums = [-1, 0, 1, 2, -1, -4],
 * 
 * A solution set is:
 * [
 * ⁠ [-1, 0, 1],
 * ⁠ [-1, -1, 2]
 * ]
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>>res;
	sort(nums.begin(),nums.end());
	if (nums.size()<3||nums.front()>0||nums.back()<0)return {};
	for (int i=0;i<nums.size()-2;i++)
	{
	    if (nums[i]>0)break;
	    if (i>0 && nums[i] == nums[i-1])continue;
	    int tmp = -nums[i];
	    int start = i+1,end=nums.size()-1;
	    while(start<end)
	    {
		if (nums[start]+nums[end] == tmp)
		{
		    res.push_back({nums[i],nums[start],nums[end]});
		    while(start<end && nums[start]==nums[start+1])start++;
		    while(start<end && nums[end]==nums[end-1])end--;
		    start++;
		    end--;
		}
		else if (nums[start] + nums[end]<tmp)start++;
		else end--;


	    }

	}
	return res;
        
    }
};
