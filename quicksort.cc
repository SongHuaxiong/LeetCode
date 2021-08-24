#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int>& nums, int left, int right)
{
    if (left >= right) return;
    int i = left, j = right;
    int base = nums[left];
    while (i < j)
    {
		while (nums[j] >= base && i < j)//等于号
			j--;
		while (nums[i] <= base && i < j)
			i++;
		if (i < j)
			swap(nums[i], nums[j]);
    }
    swap(nums[left], nums[i]);
    quicksort(nums, left, i - 1);
    quicksort(nums, i + 1, right);
}