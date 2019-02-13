/*
 * [127] Word Ladder
 *
 * https://leetcode.com/problems/word-ladder/description/
 *
 * algorithms
 * Medium (21.38%)
 * Total Accepted:    199.8K
 * Total Submissions: 930.1K
 * Testcase Example:  '"hit"\n"cog"\n["hot","dot","dog","lot","log","cog"]'
 *
 * Given two words (beginWord and endWord), and a dictionary's word list, find
 * the length of shortest transformation sequence from beginWord to endWord,
 * such that:
 * 
 * 
 * Only one letter can be changed at a time.
 * Each transformed word must exist in the word list. Note that beginWord is
 * not a transformed word.
 * 
 * 
 * Note:
 * 
 * 
 * Return 0 if there is no such transformation sequence.
 * All words have the same length.
 * All words contain only lowercase alphabetic characters.
 * You may assume no duplicates in the word list.
 * You may assume beginWord and endWord are non-empty and are not the same.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input:
 * beginWord = "hit",
 * endWord = "cog",
 * wordList = ["hot","dot","dog","lot","log","cog"]
 * 
 * Output: 5
 * 
 * Explanation: As one shortest transformation is "hit" -> "hot" -> "dot" ->
 * "dog" -> "cog",
 * return its length 5.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input:
 * beginWord = "hit"
 * endWord = "cog"
 * wordList = ["hot","dot","dog","lot","log"]
 * 
 * Output: 0
 * 
 * Explanation: The endWord "cog" is not in wordList, therefore no possible
 * transformation.
 * 
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
	unordered_set<string>dict(wordList.begin(),wordList.end());
	queue<pair<string,int>>que;
	int level = 1;
	string word = beginWord;
	pair<string,int>tmp(word,level);
	que.push(tmp);
	while(!que.empty())
	{
	    auto tmp_pair = que.front();que.pop();
	    word = tmp_pair.first;
	    level = tmp_pair.second;

	    for (int i=0;i<word.size();i++)
	    {
		string next_word = word;
		for (char c='a';c<='z';c++)
		{
		    next_word[i] = c;
		    if(dict.find(next_word)==dict.end())
			continue;
		    if (next_word == endWord)
			return level+1;
		    dict.erase(next_word); // 需要将字典中出现过的词删去,以免重复计算
		    tmp_pair.first = next_word;
		    tmp_pair.second = level+1;
		    que.push(tmp_pair);
		}
	    }

	}
	return 0;

    }
};
