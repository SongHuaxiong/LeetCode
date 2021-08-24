#include <iostream>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, x, y;
    vector<vector<int>> pos;
    cin >> n;
    for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vector<int> temp = {x, y};
		pos.push_back(temp);
	}
	int count = 0;

	unordered_map<int, int> lt_to_rb, rt_to_lb;
	for (auto& v : pos)
	{
		lt_to_rb[v[0] + v[1]]++;//左上到右下
		rt_to_lb[v[1] - v[0]]++;//右上到左下
	} 
	// 组合数
	for (auto& p : lt_to_rb)
		if (p.second >= 2)
			count += p.second * (p.second - 1) / 2;

	for (auto& p : rt_to_lb)
		if (p.second >= 2)
			count += p.second * (p.second - 1) / 2;

	cout << count << endl;
	return 0;
}