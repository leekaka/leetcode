class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	    unordered_map<int,int>map;    // 用来记录值和位置
	    vector<int>res;
	    for(int i = 0;i<nums.size();i++)
	    {
		    int tmp = target - nums[i];
		    if(map.find(tmp)!=map.end()){    //找到了    
			res.push_back(map[tmp]);
		    	res.push_back(i);
			return res;
		    }
		    map[nums[i]] = i;   
	    }
	    return res;
        
    }
};
