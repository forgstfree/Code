#include <cstdio>
#define MAXNUM 110
int money[] = { 100,50,10,5,2,1 };
int solvemoney(int m);
int main()
{
	int n;
	int income;
	int totals;
	while(scanf("%d",&n)&&n)
	{
		totals=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&income);
			totals += solvemoney(income);
		}
		printf("%d\n",totals);
	}
}
// return least paper money
int solvemoney(int m)
{
	int p;
	int sum=0;
	for(int i=0;i<6;i++)
	{
		p=0;
		p=m/money[i];
		sum+=p;
		m-=(p*money[i]);
	}
	return sum;
}
