/*
 * [387] First Unique Character in a String
 *
 * https://leetcode.com/problems/first-unique-character-in-a-string/description/
 *
 * algorithms
 * Easy (47.53%)
 * Total Accepted:    157.1K
 * Total Submissions: 330.6K
 * Testcase Example:  '"leetcode"'
 *
 * 
 * Given a string, find the first non-repeating character in it and return it's
 * index. If it doesn't exist, return -1.
 * 
 * Examples:
 * 
 * s = "leetcode"
 * return 0.
 * 
 * s = "loveleetcode",
 * return 2.
 * 
 * 
 * 
 * 
 * Note: You may assume the string contain only lowercase letters.
 * 
 */
class Solution {
public:
    int firstUniqChar(string s) {
	unordered_map<char,pair<int,int>>map;
	int index = s.size();
	for(int i=0;i<s.size();i++)
	{
	    map[s[i]].first++;
	    map[s[i]].second=i;
	}

	for(auto c:s)
	{
	    if(map[c].first==1)index = min(index,map[c].second);
	}
	return index==s.size()?-1:index;
        
    }
};
