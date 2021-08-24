#include <iostream>
#include <vector>
using namespace std;

int find(vector<int>& nums);
int partition(vector<int>& nums, int left, int right);
void swap(vector<int>& nums, int i, int j);

int find(vector<int>& nums) {
	int left = 0, right = nums.size() - 1;
	int minnum = 0, maxnum = 65535;
	while (left < right)
	{
		int index = partition(nums, left, right);
		if (nums[index] > 0 && index > 0)
		{
			maxnum = min(maxnum, nums[index]);
			right = index - 1;
		}
		if (nums[index] < 0 && index < nums.size() - 1)
		{
			minnum = max(minnum, nums[index]);
			left = index + 1;
		}
	}
	cout << nums[left] << ", " << nums[right] << endl;
	return 0;
}

int partition(vector<int>& nums, int left, int right)
{
	int i = left, j = right;
	//随机抽取标记位元素
	int randIndex = left + rand() % (right - left + 1);
	swap(nums, left, randIndex);
	int curNum = nums[left];
	int index = left;
	while (i < j)
	{
		while (nums[j] >= curNum && i < j)
			j--;
		while (nums[i] <= curNum && i < j)
			i++;
		if (i < j)
		{
			swap(nums, i, j);
		}
	}
	swap(nums, index, i);
	return i;
}
void swap(vector<int>& nums, int i, int j)
{
	int temp = nums[i];
	nums[i] = nums[j];
	nums[j] = temp;
}

int main()
{
	vector<int> nums{-1, 3, 4, 6, 8, 2, 6, 1};
	find(nums);
	for (int num : nums)
		cout << num << endl;

}
