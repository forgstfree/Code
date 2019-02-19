#include <cstdio>
#include <cstring>
#define MAXNUM 12
void mychufa(double a,int b);
int main(void)
{
	int i;
	int len;
	char nearestsum[1000];
	double sum;
	double x;
	sum=0;
	freopen("in.data","r",stdin);
	for(i=0;i<MAXNUM;i++ )
	{
		scanf("%lf",&x);
		sum+=x;
	}
	putchar('$');
	mychufa(sum,12);
	printf("\n");
}
void mychufa(double a,int b)
{
	int aint = a/b;
	printf("%d",aint);
	if(aint*b==a)
		return ;
	putchar('.');
	a-=(aint*b);
	while(a>0.00001)
	{
		aint = a*10/b;
		a=a*10-aint*b;
		printf("%d",aint);
	}
}
