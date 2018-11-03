/*
 * [5] Longest Palindromic Substring
 *
 * https://leetcode.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (25.62%)
 * Total Accepted:    397.7K
 * Total Submissions: 1.6M
 * Testcase Example:  '"babad"'
 *
 * Given a string s, find the longest palindromic substring in s. You may
 * assume that the maximum length of s is 1000.
 * 
 * Example 1:
 * 
 * 
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "cbbd"
 * Output: "bb"
 * 
 * 
 */
//
//用最朴素的方法
//对于每一个s[i]都去求回文，需要先踢掉相同的字符
//返回最大的长度即可
//
class Solution {
public:
    string longestPalindrome(string s) {
	if (s.empty())return "";
	if (1 == s.size()) return s;
	int start = 0,maxlen = 1;

	for (int i = 0;i<s.size();)
	{
	    if(s.size()-i <=maxlen/2)break;　　// 这个条件加速循环结束，即到这个i的时候，发现最大也不可能超过maxlen了
	    int j = i,k = i;
	    while(k<s.size()-1 && s[k+1] == s[k])k++;
	    i = k + 1  ;                       // 更新 i 
	    while(j>0 && k<s.size()-1 && s[k+1] == s[j-1]){j--;k++;}
	    int tmplen = k-j+1;
	    if(tmplen>=maxlen){maxlen=tmplen;start=j;}
	}

	return s.substr(start,maxlen);
        
    }
};
