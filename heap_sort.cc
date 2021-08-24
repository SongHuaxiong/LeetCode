#include <iostream>
#include <vector>
using namespace std;

void build_heap(vector<int>& nums, int start, int end)
{
	int father = start;
	int son = father * 2 + 1;
	while (son <= end)
	{
		if (son + 1 <= end && nums[son + 1] > nums[son])
			son = son + 1;
		if (nums[father] > nums[son])
			return;
		else
		{
			swap(nums[father], nums[son]);
			father = son;
			son = 2 * father + 1;
		}
	}
}

void heap_sort(vector<int>& nums)
{
	int size = nums.size();
	for (int i = size / 2 - 1; i >= 0; i--)
		build_heap(nums, i, size - 1);
	for (int i = size - 1; i > 0; i--)
	{
		swap(nums[0], nums[i]);
		build_heap(nums, 0, i - 1);
	}	
}

int main()
{
	vector<int> nums{3,4,2,1,9,77,8,5,43,13};
	heap_sort(nums);
	for (auto num : nums)
		cout << num << ",";
	return 0;
}