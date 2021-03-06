/*
 * [88] Merge Sorted Array
 *
 * https://leetcode.com/problems/merge-sorted-array/description/
 *
 * algorithms
 * Easy (34.16%)
 * Total Accepted:    307.4K
 * Total Submissions: 897.9K
 * Testcase Example:  '[1,2,3,0,0,0]\n3\n[2,5,6]\n3'
 *
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as
 * one sorted array.
 * 
 * Note:
 * 
 * 
 * The number of elements initialized in nums1 and nums2 are m and n
 * respectively.
 * You may assume that nums1 has enough space (size that is greater or equal to
 * m + n) to hold additional elements from nums2.
 * 
 * 
 * Example:
 * 
 * 
 * Input:
 * nums1 = [1,2,3,0,0,0], m = 3
 * nums2 = [2,5,6],       n = 3
 * 
 * Output: [1,2,2,3,5,6]
 * 
 * 
 */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int k = m+n;
	while(m > 0 & n > 0)
	{
	    if(nums1[m-1] >= nums2[n-1])
	    {
		nums1[k-1] = nums1[m-1];
		m--;
		k--;
	    }
	    else
	    {
		nums1[k-1] = nums2[n-1];
		n--;
		k--;
	    }
	}
	while(n>0)
	{
	    nums1[k-1] = nums2[n-1];
	    n--;
	    k--;
	}
        
    }
};
