#include <iostream>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool valid(int a, int b, int c, int d)
{
	double res1, res2;
	if (b == 0)
		res1 = -1;
	else
		res1 = double(a / b);
	if (d == 0)
		res2 = -1;
	else
		res2 = double(c / d);
	return res1 == res2;
}

int main() {
	int n = 9;
	string str = "101001010";
	// cin >> n;
	// cin >> str;
	
	vector<int> count_0(n), count_1(n), res(n, 1);
	if (str[0] == '0')
		count_0[0] = 1;
	else
		count_1[0] = 1;

	for (int i = 1; i < n; i++)
    {
		if (str[i] == '0')
			count_0[i] = count_0[i - 1] + 1;
		else
			count_1[i] = count_1[i - 1] + 1;

		int temp = 0;
		for (int start = 0; start < i; start++)
		{
			int right_0 = count_0[i] - count_0[start];
			int right_1 = count_1[i] - count_1[start];
			if (valid(right_0, right_1, count_0[start], count_1[start]))
				temp++;
		}
		if (temp)
			res[i] = temp;
    }
	for (int num : res)
		cout << num << " ";
    cout << endl;
	return 0;
}