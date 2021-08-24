#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& nums)
{
	int n = nums.size();
	if (n < 2)
		return;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (nums[j] > nums[j + 1])
				swap(nums[j], nums[j + 1]);
		}
}

int main()
{
	vector<int> nums{3,4,2,1,9,77,8,5,43,13};
	bubbleSort(nums);
	for (auto num : nums)
		cout << num << ",";
	return 0;
}