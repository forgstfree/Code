#include <cstdio>
#define MAXNUM 900000000
char cows[MAXNUM];
void cowagerow(int &n);
unsigned int countcows(int n);
int main()
{
	int n;
	int sum=1;
	while(~scanf("%d",&n)&&n)
	{
		cows[0] = 4;	//初始母牛为4岁
		sum=1;
		// 递归
		printf("%d\n",countcows(n));
		for(int i=1;i<n;i++)
			cowagerow(sum);	
		printf("%d\n",sum);
		for(int i=0;i<sum;i++)
			cows[i] = 0;
	}
}
// 模拟年轮使牛生长
void cowagerow(int &n)
{
	for(int i=0;i<n;i++)
	{
		if(cows[i]<10)
			cows[i]++;	//每年每头牛长大一岁
		if(cows[i]>=4)
			n++;	//能生牛的话就总数加1
	}
}
// 递归
// 计算第n年的牛的数目
unsigned int countcows(int n)
{
	if(n<4)
		return n;
	//上一年牛的数目加上前三年(有生育能力了)出生的牛所产的崽
	return countcows(n-1)+countcows(n-3);
}
