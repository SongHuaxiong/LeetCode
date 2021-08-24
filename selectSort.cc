#include <iostream>
#include <vector>
using namespace std;
void selectSort(vector<int>& nums)
{
	int n = nums.size();
	if (n < 2)
		return;
	for (int i = 0; i < n; i++)
	{
		int minIndex = i;
		int minNum = nums[i];
		for (int j = i + 1; j < n; j++)
		{
			if (nums[j] < minNum)
			{
				minIndex = j;
				minNum = nums[j];
			}
		}
		swap(nums[i], nums[minIndex]);
	}
}

int main()
{
	vector<int> nums{3,4,2,1,9,77,8,5,43,13};
	selectSort(nums);
	for (auto num : nums)
		cout << num << ",";
	return 0;
}