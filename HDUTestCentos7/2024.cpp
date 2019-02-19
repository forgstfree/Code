//Wrong
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
#define MAXNUM 200
int main()
{
	int n;
	char str[MAXNUM];
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		cin.getline(str,MAXNUM);
		if(isdigit(str[0]))
			cout<<"no\n";
		else
		{
			if(strchr(str,' ')!=NULL)
				printf("no\n");
			else
				printf("yes\n");
		}
	}
}
