#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int zhanzhuxiangchu(int a,int b);
int main()
{
	int n,m;
	int x;
	while(~scanf("%d %d",&n,&m)&&(n+m!=-2))
	{
		if(n<m)
		{
			x=m;
			m=n;
			n=x;
		}
		x=zhanzhuxiangchu(n,m);
		if(x==1)
		{
			printf("YES\n");
		}
		else	
		{
			printf("POOR Haha\n");
		}
	}
}
// make sure a>=b;
int zhanzhuxiangchu(int a,int b)
{
	return a%b==0?b:zhanzhuxiangchu(b,a%b);
}
