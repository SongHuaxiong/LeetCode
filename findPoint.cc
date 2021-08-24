#include <iostream>
#include <vector>
using namespace std;

int get_distance(vector<int>& a, vector<int>& b) {
	return (a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]);
}

int main() {
	int x, y;
	vector<vector<int>> point;
	for (int i = 0; i < 3; i++)
	{
		cin >> x >> y;
		vector<int> temp = {x, y};
		point.push_back(temp);
	}

	int dis_0_1 = get_distance(point[0], point[1]);
	int dis_0_2 = get_distance(point[0], point[2]);
	int dis_1_2 = get_distance(point[1], point[2]);

	vector<int> point_1, point_2, point_3, res;
	if (dis_0_1 == dis_0_2)
		point_1 = point[1], point_2 = point[2], point_3 = point[0];
	else if (dis_0_1 == dis_1_2)
		point_1 = point[0], point_2 = point[2], point_3 = point[1];
	else
		point_1 = point[1], point_2 = point[0], point_3 = point[2];
		
	res = {point_1[0] - point_3[0] + point_2[0], point_1[1] - point_3[1] + point_2[1]};
	cout << res[0] << res[1] << endl;
	return 0;
}
