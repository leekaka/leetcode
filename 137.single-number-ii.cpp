/*
 * [137] Single Number II
 *
 * https://leetcode.com/problems/single-number-ii/description/
 *
 * algorithms
 * Medium (44.87%)
 * Total Accepted:    160.5K
 * Total Submissions: 353.6K
 * Testcase Example:  '[2,2,3,2]'
 *
 * Given a non-empty array of integers, every element appears three times
 * except for one, which appears exactly once. Find that single one.
 * 
 * Note:
 * 
 * Your algorithm should have a linear runtime complexity. Could you implement
 * it without using extra memory?
 * 
 * Example 1:
 * 
 * 
 * Input: [2,2,3,2]
 * Output: 3
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [0,1,0,1,0,1,99]
 * Output: 99
 * 
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
	int ret = 0;
	for (int i=0;i<32;i++)
	{
	    int count=0;
	    int mask= 1<<i;
	    for(int j=0;j<nums.size();j++)
	    {
		if((nums[j]&mask)!=0)
		{
		    count++;
		}
	    }
	    
	    if(count%3==1)
	    {
		ret=ret|mask;
	    }
	}
	return ret;
        
    }
};
