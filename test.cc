#include <string>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        if (s.empty())
            return 0;
        stack<char> stk;
        vector<int> record;
        int times = 0;

        for (int j = s.size() - 1; j > 0; j--)
            if (s[j] == '[')
                record.push_back(j);
        
        for (int i = 0; i < s.size(); i++)
        {
            char cur = s[i];
            if (cur == '[')
                stk.push(cur);
            else
            {
                if (!stk.empty() && stk.top() == '[')
                    stk.pop();
                else
                {
                    swap(s[i], s[*record.begin()]);
                    record.erase(record.begin());
                    times++;
                    stk.push('[');
                }
            }   
        }
        return times;
    }
};


unsigned long roundup_power_of_2(unsigned long num)
{
	if (num & (num  - 1) == 0)
		return num;
	
	unsigned long temp = (unsigned long)((unsigned long)~0);//num - 1
	unsigned long andv = ~(temp & (temp >> 1));
	while ((andv & num) == 0)
		andv = andv >> 1;
	return andv << 1;
}

int main()
{
	unsigned long num = 25;
	cout << roundup_power_of_2(num) << endl;
}