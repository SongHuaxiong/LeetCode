#include <iostream>
#include <vector>
using namespace std;

class unionFind
{
private:
	int count;
	vector<int> parent;
	vector<int> weight;
public:
	unionFind(int num) 
	{
		count = num;
		for (int i = 0; i < num; i++) 
		{
			weight[i] = 1;
			parent[i] = i;
		}
	};
	~unionFind() {};

	int find(int x) 
	{
		while (parent[x] != x)
		{
			parent[x] = parent[parent[x]];
			x = parent[x];
		}
		return x;
	}

	void unionNode(int p, int q) {
		int root_p = find(p);
		int root_q = find(q);
		if (root_q == root_p)
			return;
		if (weight[root_p] > weight[root_q])
		{
			parent[root_q] = root_p;
			weight[root_p] += weight[root_q];
		}
		else
		{
			parent[root_p] = root_q;
			weight[root_q] += weight[root_p];
		}
		count--;
	}

	bool isConnected(int p, int q) {
		return find(p) == find(q);
	}
};


