# 买卖股票的最佳时机 集合
    * 121
	* 维护两个值，一个相减后的最大值，一个是当前最小值
	    × max_ = max(res,prices[i] -min_)
	    * min_ = min(min_,prices[i])
	    * return res;
    * 122
	* 找到可以买卖的两个值即可
	    * 可以买的：
		* 后来的比前面的大
	    * 可以卖的：
		* 后来的比前面的小
	    * return sum+=(sell-buy)
