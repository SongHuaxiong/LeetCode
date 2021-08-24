#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int lo, int mid, int hi)
{
	int i = lo, j = mid + 1;
	vector<int> temp;
	while (i <= mid && j <= hi)
		temp.push_back(nums[i] <= nums[j] ? nums[i++] : nums[j++]);
	while (i <= mid)
		temp.push_back(nums[i++]);
	while (j <= hi)
		temp.push_back(nums[j++]);
	for (int k = lo; k <= hi; k++)
		nums[k] = temp[k - lo];
}

void merge_sort(vector<int>& nums, int lo, int hi)
{
	if (lo < hi)
	{
		int mid = (hi - lo) / 2 + lo;
		merge_sort(nums, lo, mid);
		merge_sort(nums, mid + 1, hi);
		merge(nums, lo, mid, hi);
	}
}

int main()
{
	vector<int> nums{3,4,2,1,9,77,8,5,43,13};
	merge_sort(nums, 0, nums.size() - 1);
	for (auto num : nums)
		cout << num << ",";
	return 0;
}