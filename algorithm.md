## 排序算法

### 冒泡排序
```C++
void bubblesort(vector<int>& nums)//两两比较从前往后
{
    int n = nums.size();
    if (n == 0 || n == 1) return;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)//排完一个，需要排的数量就减少
            if (nums[j] > nums[j + 1])
            {
                auto temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
}
```
---
### 选择排序
```C++
void selectionsort(vector<int>& nums)
{
	int n = nums.size();
	if (n == 0 || n == 1) return;
    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        int curnum = nums[i];
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < curnum)//找到最小的数，记录下标
            {
                minindex = j;
                curnum  = nums[j];
            }
        }
        auto temp = nums[i];//和未排序的第一个数交换
        nums[i] = nums[minindex];
        nums[minindex] = temp;
    }
}
```
---
### 插入排序
```C++
void insertionsort(vector<int>& nums)
{
	int n = nums.size();
	if (n == 0 || n == 1) return;
    for (int j = 1; j < n; j++)
    {
        int key = nums[j];//待排序
        int i = j - 1;//已经排完序的最后一个索引
		//从后向前逐个比较已经排序过数组，如果比它小，则把后者用前者代替，
		//数组逐个后移动一位,为找到合适的位置时候便于Key的插入
        while (i >= 0 && key < nums[i])
        {
            nums[i + 1] = nums[i];
            i--;
        }
        nums[i + 1] = key;
    }
}
```
---
### 归并排序
```C++
void merge(vector<int>& nums, int lo, int mid, int hi)
{
	int i = lo;//左侧数组起始位置
	int j = mid + 1;//右侧数组起始位置
	vector<int> temp;//暂存
    while (i <= mid && j <= hi)
        temp.push_back(nums[i] <=
         nums[j] ? nums[i++] : nums[j++]);	
	while (i <= mid)
		temp.push_back(nums[i++]);
	while (j <= hi)
		temp.push_back(nums[j++]);

    auto it = temp.begin();
	while (lo <= hi)
		nums[lo++] = *it++;
}
void mergesort(vector<int>& nums, int lo, int hi)
{
    if (lo < hi)
    {
        int mid = (hi + lo) / 2;
        mergesort(nums, lo, mid);
        mergesort(nums, mid + 1, hi);
        merge(nums, lo, mid, hi);
    }
}
```
---
### 快速排序
```C++
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
		{
			int temp = nums[j];
			nums[j] = nums[i];
			nums[i] = temp;
		}
    }
    nums[left] = nums[i];
    nums[i] = base;
    quicksort(nums, left, i - 1);
    quicksort(nums, i + 1, right);
}
```

### 快速选择
```C++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> res{5,6,15,89,7,2,1,3,52,63,12,64,47};
	for (auto num : res)
		cout << num << ",";
	cout << endl;
	int k;
	cin >> k;
    //下标k位置之前的数都比他大，后面都比他小
	nth_element(res.begin(), res.begin() + 5, res.end(), greater<int>());
	for (auto num : res)
		cout << num << ",";
	cout << endl;
}
```

### 堆排序
```C++
void max_Heap(vector<int>& nums, int start, int end)
{
    int father = start;//父节点
    int son = father * 2 + 1;//第一个子节点
    while (son <= end)
    {
        if (son + 1 <= end && nums[son + 1] > nums[son])//比较节点大小，选择较大的节点
            son = son + 1;
        if (nums[father] > nums[son])//调整完毕，跳出
            return;
        else//交换父子节点，并循环比较子节点和孙节点
        {
            swap(nums[father], nums[son]);
            father = son;
            son = father * 2 + 1;
        }
    }
}

void heapSort(vector<int>& nums, int size)
{
    //初始化，从第一个父节点开始调整，完全二叉树
    for (int i = size / 2 - 1; i >= 0; i--)
        max_Heap(nums, i, size - 1);
    //交换元素并重新调整
    for (int i = size - 1; i > 0; i--)
    {
        swap(nums[0], nums[i]);
        max_Heap(nums, 0, i - 1);
    }
}
```

### test main 
```C++
int main()
{
    vector<int> nums = { 2,5,8,4,1,9,3,7,10,0,11,16,13 };
    //冒泡测试
    //bubblesort(nums);
    //选择测试
    //selectionsort(nums);
    //插入测试
    //insertionsort(nums);
    //归并测试
    //mergesort(nums, 0, nums.size() - 1);
    //快速排序测试
    //quicksort(nums, 0, nums.size() - 1);
    for (auto num : nums)
        cout << num << "---";
    return 0;
}
```

### BFPRT
```C++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//主函数
int BFPRT(vector<int>& nums, int left, int right, int k);
//获取主元所在下标
int getPivotIndex(vector<int>& nums, int left, int right);
//Partition函数
int partition(vector<int>& nums, int left, int right, int pivotIndex);
//插入排序获取中位数下标
int getMedianByInsertionSort(vector<int>& nums, int left, int right);

int main(){
    vector<int> array{13,14,15,12,10,9,8,7,11,1,5,2,3,4,6};

    int length= array.size();

    printf("原始数组为：\n");
    for(int i=0; i<length; i++) {
        cout<<array[i]<<"  ";
    }

    for (int k = 1; k <= length; k++)
    {
        printf("第%d小的数是：%d", k, array[BFPRT(array, 0, length - 1, k)]);
        printf("此时的数组为：\n");
        for(int i = 0; i < length; i++) 
            cout<<array[i]<<"  ";
        cout << endl << "-----------------------------------------------------" <<endl;
    }

    return 0;
}

int BFPRT(vector<int>& nums, int left, int right, int k)
{
    int pivotIndex = getPivotIndex(nums, left, right);
    int index = partition(nums, left, right, pivotIndex);
	if (left == right) return left;
    int count = index-left+1;
    if(count == k)
        return index;
    else if(count > k)
        return BFPRT(nums, left, index-1, k);
    else
        return BFPRT(nums, index+1, right, k-count);
}

int getPivotIndex(vector<int>& nums, int left, int right)
{
    if (right - left + 1 <= 5) return getMedianByInsertionSort(nums, left, right);
    int pos = left;
    for (int i = left; i + 4 < right; i += 5)
    {
        int index = getMedianByInsertionSort(nums, i, i + 4);
        swap(nums[pos++], nums[index]);
    }
    return BFPRT(nums, left, pos, (pos - left) / 2 + left + 1);
}

int partition(vector<int>& nums, int left, int right, int pivotIndex)
{
    int i = left, j = right;
    int key = nums[pivotIndex];
    swap(nums[left], nums[pivotIndex]);
    while (i < j)
    {
        while (nums[j] >= key && i < j)
            j--;
        while (nums[i] <= key && i < j)
            i++;
        if (i < j)
            swap(nums[i], nums[j]);
    }
    swap(nums[i], nums[left]);
    return i;
}

int getMedianByInsertionSort(vector<int>& nums, int left, int right)
{
    for (int j = left + 1; j <= right; j++)
    {
        int i = j - 1;
        int curNum = nums[j];
        while (i >= left && curNum < nums[i])
        {
            nums[i + 1] = nums[i];
            i--;
        }
        nums[i + 1] = curNum;
    }
    return (right - left) / 2 + left;
}
```
---


### 快排非递归实现
### 归并非递归实现
### 用栈模拟递归
---
---
### 字典树/前缀树
```C++
class Trie {
private:
    bool isEnd;
    Trie* next[26];
public:
    Trie() {
        isEnd = false;
        memset(next, 0, sizeof(next));
    }
    
    void insert(string word) {
        Trie* node = this;
        for (char c : word) {
            if (node->next[c-'a'] == NULL) {
                node->next[c-'a'] = new Trie();
            }
            node = node->next[c-'a'];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        Trie* node = this; 
        for (char c : word) {
            node = node->next[c - 'a'];
            if (node == NULL) {
                return false;
            }
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        Trie* node = this;
        for (char c : prefix) {
            node = node->next[c-'a'];
            if (node == NULL) {
                return false;
            }
        }
        return true;
    }
};

```
---
### 树状数组
```C++
class F_Tree
{
private:
    vector<int> tree;
    int len;

    //lowbit函数
    int lowbit(int x)
    {
        return x & (-x);
    }
public:
    F_Tree(int n) : len(n)
    {
        tree.resize(n + 1, 0);
    }

    ~F_Tree(){}

    //单点更新、由下至上
    void add(int index, int value)
    {
        while (index <= len)
        {
            tree[index] += value;
            index += lowbit(index);
        }
    }

    //查询前缀和
    int query(int index)
    {
        int res = 0;
        while (index > 0)
        {
            res += tree[index];
            index -=lowbit(index);
        }
        return res;
    }
};
```
---
---