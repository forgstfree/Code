#include <cstdio>
int main()
{
	int n;
	int sum;
	while(~scanf("%d",&n))
	{
		sum=1;
		n--;
		while(n--)
		{
			sum = (sum+1)*2;
		}
		printf("%d\n",sum);
	}
}
