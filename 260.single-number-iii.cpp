/*
 * [260] Single Number III
 *
 * https://leetcode.com/problems/single-number-iii/description/
 *
 * algorithms
 * Medium (55.83%)
 * Total Accepted:    102.5K
 * Total Submissions: 181.7K
 * Testcase Example:  '[1,2,1,3,2,5]'
 *
 * Given an array of numbers nums, in which exactly two elements appear only
 * once and all the other elements appear exactly twice. Find the two elements
 * that appear only once.
 * 
 * Example:
 * 
 * 
 * Input:  [1,2,1,3,2,5]
 * Output: [3,5]
 * 
 * Note:
 * 
 * 
 * The order of the result is not important. So in the above example, [5, 3] is
 * also correct.
 * Your algorithm should run in linear runtime complexity. Could you implement
 * it using only constant space complexity?
 * 
 */
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
	int sum = 0;
	for (int i=0;i<nums.size();i++)
	{
	    sum^=nums[i];
	}
	sum&=-sum;
	vector<int>ret(2);
	for(int i=0;i<nums.size();i++)
	{
	    if(nums[i]&sum)
	    {
		ret[0]^=nums[i];
	    }
	    else
	    {
		ret[1]^=nums[i];
	    }
	}
        
	return ret;
    }
};
