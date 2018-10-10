class Solution {
public:
    void sortColors(vector<int>& nums) {
	int lo = 0, mid = 0, hi = nums.size()-1, tmp = 0;
	while(mid<=hi)
	{
	    if(nums[mid] == 0)
	    {
		tmp = nums[mid];
		nums[mid] = nums[lo];
		nums[lo] = tmp;
		lo++;
		mid++;
	    }
	    if(nums[mid] == 1)
	    {
		mid++;
	    }
	    if(nums[mid] == 2)
	    {
		tmp = nums[mid];
		nums[mid] = nums[hi];
		nums[hi] = tmp;
		hi--;
	    }

	}
        
    }
};
