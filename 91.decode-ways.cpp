class Solution {
public:
    int numDecodings(string s) {
	if(s.empty()||s[0] == '0')return 0;
	int f1 = 1, f2 =1;
	for (int i = 1;i<s.size();i++)
	{
	    
	    if(s[i] == '0') f1 = 0;
	    if(s[i-1] =='1'||s[i-1] == '2' && s[i]<='6')
	    {
		f1 = f1 + f2;
		f2 = f1 - f2;
	    }
	    else
	    {
		f2 = f1;
	    }

	}

	return f1;
        
    }
};
