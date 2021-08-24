#include <iostream>
#include <vector>
using namespace std;
void insertSort(vector<int>& nums)
{
	int n = nums.size();
	if (n < 2)
		return;
	for (int i = 1; i < n; i++)
	{
		int curNum = nums[i];
		int pre = i - 1;
		while (pre >= 0 && nums[pre] > curNum)
		{
			nums[pre + 1] = nums[pre];
			pre--;
		}
		nums[pre + 1] = curNum;
	}
}

int main()
{
	vector<int> nums{3,4,2,1,9,77,8,5,43,13};
	insertSort(nums);
	for (auto num : nums)
		cout << num << ",";
	return 0;
}