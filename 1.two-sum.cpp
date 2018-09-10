class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	    unordered_map<int,int>map;
	    vector<int>res;
	    for(int i = 0;i<nums.size();i++)
	    {
		    int tmp = target - nums[i];
		    if(map.find(tmp)!=map.end()){    
			res.push_back(map[tmp]);
		    	res.push_back(i);
			return res;
		    }
		    map[nums[i]] = i;
	    }
	    return res;
        
    }
};
