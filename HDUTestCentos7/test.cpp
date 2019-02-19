#include<iostream>
#include<vector>
using namespace std;

void grow(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i]++;
	}
}

void breed(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] >= 4)
		{
			vec.push_back(1);
		}
	}
}

int main(void)
{
	int n;
	while (cin >> n && n)
	{	
		vector<int> v{4};
		for (int i = 1; i < n; i++)
		{
			grow(v);
			breed(v);
		}
		cout << v.size() << endl;
	}
	return 0;
}
