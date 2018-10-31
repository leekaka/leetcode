class Solution {
public:
    int lengthOfLongestSubstring(string s) {	
	int maxlen = 0,start = -1;
	vector<int>dict(255,-1);  // 创建一个数组 记录字符s出现的位置
	for(int i = 0;i<s.size();i++)
	{
	    if(dict[s[i]] > start)    //核心:当重复出现（只有出现才会大于-1）时，出现过一次 start，下一个start要在第一个start之后 
		start = dict[s[i]];
	    dict[s[i]] = i;
	    maxlen = max(maxlen,i-start);
	}
	return maxlen;
        
    }
};
