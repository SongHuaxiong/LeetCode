#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

void cinNumwhileNotEnter() {
	//输入数字，遇到回车结束，空格分隔字符串同理
	int num;
	vector<int> nums;
	for (; ; )
	{
		cin >> num;
		nums.push_back(num);
		if (cin.get() == '\n')
			break;
		// if (getchar() == '\n')
		// 	break;
	}
	for (int num : nums)
		cout << num << ",";
	cout << endl;
}

void cinStringSplitByChar() {
	//输入一个字符串，‘，’分割
	string s;
	vector<string> record;
	cin >> s;
	string temp;
	istringstream iss(s);
	while (getline(iss, temp, ','))
	{
		record.push_back(temp);
	}
	for (string s : record)
		cout << s << "、";
	cout << endl;
}

void cinStringContainsBlock() {
	//输入包含空格的字符串
	string s;
	getline(cin, s);
	cout << s << endl;
}
int main() {
	return 0;
}