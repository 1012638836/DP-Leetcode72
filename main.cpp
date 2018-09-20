#include<iostream>
#include<vector>
using namespace std;
int MAX(int a, int b) { return a > b ? a : b; }
int MIN(int a, int b) { return a < b ? a : b; }
int maxProduct(vector<int>& nums)
{
	int res = nums[0];
	int max = res;int min = res;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] > 0) {
			max = MAX(max * nums[i], nums[i]);
			min = MIN(min * nums[i], nums[i]);
		}
		else {
			int temp = max;
			max = MAX(min * nums[i], nums[i]);
			min = MIN(temp * nums[i], nums[i]);
		}
		res = MAX(max, res);
	}
	return res;
}