#include <cstdio>
#include <iostream>
int main()
{
	int m;
	unsigned double a,b,c;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		double x;
		if(a<b)
		{
			x=b;
			b=a;
			a=x;
		}
		if(b<c)
		{
			x=c;
			c=b;
			b=x;
		}
		if(a<b)
		{
			x=b;
			b=a;
			a=x;
		}
		if(c+b<=a)
			printf("NO\n");
		else if (a-c>=b)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
