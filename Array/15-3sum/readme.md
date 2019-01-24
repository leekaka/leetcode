# 15-3sum
* sort() //先排序
* 排除特殊
    * nums[0]>0 || nums[end]<0 || nums.size()<3
    * 排除相同if (nums[i] == nums[i+1]) i++;
* res.push_back({});
