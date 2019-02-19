#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;
#define MAXNUM 1000
char dat[MAXNUM];
int main(void)
{
	int n;
	int count;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		count = 0;
		cin.getline(dat,MAXNUM);
		for(int i=0;dat[i];i++)
		{
			if(isdigit(dat[i]))
				count++;
		}
		printf("%d\n",count);
	}
}
