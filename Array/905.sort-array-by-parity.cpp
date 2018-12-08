/*
 * [941] Sort Array By Parity
 *
 * https://leetcode.com/problems/sort-array-by-parity/description/
 *
 * algorithms
 * Easy (71.01%)
 * Total Accepted:    39.5K
 * Total Submissions: 55.7K
 * Testcase Example:  '[3,1,2,4]'
 *
 * Given an array A of non-negative integers, return an array consisting of all
 * the even elements of A, followed by all the odd elements of A.
 * 
 * You may return any answer array that satisfies this condition.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [3,1,2,4]
 * Output: [2,4,3,1]
 * The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 1 <= A.length <= 5000
 * 0 <= A[i] <= 5000
 * 
 * 
 * 
 */
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
	int len = A.size();
	vector<int>res(len,0);
	int end = len-1;
	int start = 0;

	for(int i = 0; i<len; i++)
	{
	    if(A[i]%2 == 0)
	    {
		res[start++] = A[i];
	    }
	    else
	    {
		res[end--] = A[i];
	    }
	}
	return res;
    }
};
