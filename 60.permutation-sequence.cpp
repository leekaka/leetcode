/*
 * [60] Permutation Sequence
 *
 * https://leetcode.com/problems/permutation-sequence/description/
 *
 * algorithms
 * Medium (30.67%)
 * Total Accepted:    113.6K
 * Total Submissions: 370.4K
 * Testcase Example:  '3\n3'
 *
 * The set [1,2,3,...,n] contains a total of n! unique permutations.
 * 
 * By listing and labeling all of the permutations in order, we get the
 * following sequence for n = 3:
 * 
 * 
 * "123"
 * "132"
 * "213"
 * "231"
 * "312"
 * "321"
 * 
 * 
 * Given n and k, return the kth permutation sequence.
 * 
 * Note:
 * 
 * 
 * Given n will be between 1 and 9 inclusive.
 * Given k will be between 1 and n! inclusive.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: n = 3, k = 3
 * Output: "213"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: n = 4, k = 9
 * Output: "2314"
 * 
 * 
 */
class Solution {
public:
    string getPermutation(int n, int k) {
	vector<int>permutation(n+1,1);
	for(int i = 1;i<=n;i++){
	    permutation[i] = permutation[i-1]*i;  //1,1,2,6,24,...
	}

	vector<char> digits = {'1','2','3','4','5','6','7','8','9'};
	string res;
	int num = n-1;
	while(num)
	{
	    int t = (k-1)/permutation[num--];
	    k = k -t*permutation[num+1];
	    res.push_back(digits[t]);
	    digits.erase(digits.begin() + t);
	}
	res.push_back(digits[k-1]);

	return res;
    }
};
