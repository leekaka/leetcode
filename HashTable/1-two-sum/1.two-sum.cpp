/*
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (38.77%)
 * Total Accepted:    1.1M
 * Total Submissions: 2.7M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * Example:
 * 
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int,int>map;
	vector<int>res;
	for (int i=0;i<nums.size();i++)
	{
	    int tmp = target - nums[i];
	    if (map.find(tmp)!=map.end())
	    {
		res.push_back(map[tmp]); 
		res.push_back(i);
	    }

	    map[nums[i]] = i;
	}
	return res;
    }
};
