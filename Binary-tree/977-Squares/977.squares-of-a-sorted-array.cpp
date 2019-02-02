/*
 * [1019] Squares of a Sorted Array
 *
 * https://leetcode.com/problems/squares-of-a-sorted-array/description/
 *
 * algorithms
 * Easy (74.42%)
 * Total Accepted:    17.5K
 * Total Submissions: 23.5K
 * Testcase Example:  '[-4,-1,0,3,10]'
 *
 * Given an array of integers A sorted in non-decreasing order, return an array
 * of the squares of each number, also in sorted non-decreasing order.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [-4,-1,0,3,10]
 * Output: [0,1,9,16,100]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [-7,-3,2,3,11]
 * Output: [4,9,9,49,121]
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 1 <= A.length <= 10000
 * -10000 <= A[i] <= 10000
 * A is sorted in non-decreasing order.
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
	vector<int>res(A.size(),-1);
	for (int d = A.size()-1, u=0, i=d; i>=0; i--)
	{
	    res[i] = -A[u]>A[d]? A[u]*A[u++]:A[d]*A[d--];
	}
	return res;
    }
};
