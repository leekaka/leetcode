class Solution {
public:
    string simplifyPath(string path) {
	vector<string>stk;
	string tmp;
	string res;
	stringstream ss(path);
	while(getline(ss,tmp,'/'))
	{
	    if(tmp == "" || tmp == ".")continue;
	    else if (tmp == ".." && !stk.empty())stk.pop_back();
	    else if(tmp != "..")stk.push_back(tmp);
	}
	for(auto &s:stk)res +='/'+s;
	return res.empty()?"/":res;

        
    }
};
