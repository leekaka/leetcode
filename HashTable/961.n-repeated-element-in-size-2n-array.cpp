/*
 * [1001] N-Repeated Element in Size 2N Array
 *
 * https://leetcode.com/problems/n-repeated-element-in-size-2n-array/description/
 *
 * algorithms
 * Easy (73.43%)
 * Total Accepted:    18.2K
 * Total Submissions: 24.8K
 * Testcase Example:  '[1,2,3,3]'
 *
 * In a array A of size 2N, there are N+1 unique elements, and exactly one of
 * these elements is repeated N times.
 * 
 * Return the element repeated N times.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3,3]
 * Output: 3
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [2,1,2,5,3,2]
 * Output: 2
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: [5,1,5,2,5,3,5,4]
 * Output: 5
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 4 <= A.length <= 10000
 * 0 <= A[i] < 10000
 * A.length is even
 * 
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
//	sort(A.begin(),A.end());
//	return A[A.size()/2]==A[A.size()-1]?A[A.size()-1]:A[A.size()/2-1];

	unordered_map<int,int>nums;
	for (auto a:A)
	{
	    nums[a]++;
	    if (nums[a] == A.size()/2)return a;
	}
	return -1;
    }

};
