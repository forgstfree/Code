#include <cstdio>
#include <cmath>
#define MAXNUM 2600
int primes[MAXNUM];
bool allprime;
void siftprime(int arr);
int main()
{
	// presolve primes
	siftprime(MAXNUM);
	int x,y;
	while(scanf("%d %d",&x,&y)&&(x||y))
	{
		allprime = true;
		for(int i=x;i<=y;i++)
		{
			if(primes[i*i+i+41])
			{
				allprime = false;
				break;
			}
		}
		if(allprime)
			printf("OK\n");
		else
			printf("Sorry\n");
	}
}
void siftprime(int arr)
{
	for(int i=2;i<sqrt(arr);i++)
	{
		for(int j=i*i;j<arr;j+=i)
		{
			if(!primes[j])
				primes[j] = 1;
		}
	}
}


