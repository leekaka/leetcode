/*
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (53.03%)
 * Total Accepted:    392.8K
 * Total Submissions: 739.5K
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 * 
 * Example:
 * 
 * 
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 * Note:
 * 
 * 
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 * 
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
	int j = nums.size(),cnt = 0;
	for (auto n:nums)
	{
	    if (n != 0)
	    {
		nums[cnt++] = n;
	    }
	}
	while(j > cnt)
	{
	    nums[cnt++]=0;
	}
    }
};
