#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define MAXNUM 1010
char ch[MAXNUM];
void reversestr(char *d);
int main(void)
{
	int m;
	string s;
	stringstream ss;
	scanf("%d",&m);
	getchar();
	while(m--)
	{
		cin.getline(ch,MAXNUM);
		reversestr(ch);
		cout<<endl;
	}
}
void reversestr(char *d)
{
	int i=0;
	int j=0;
	while(d[i])
	{
		if(d[i]==' ')
		{
			for(int k=i-1;k>=j;k--)
			{
				cout<<d[k];
			}
			putchar(' ');
			j=i+1;
		}
		i++;
	}
	for(int k=i-1;k>=j;k--)
	{
		cout<<d[k];
	}
}
