#include <cstdio>
void trsfbase(int n,int base,int &sum);
int main()
{
	int n=2991;
	int ndet;
	int nhex;
	int nduo;
	while(n<10000)
	{
		ndet=nduo=nhex=0;
		trsfbase(n,10,ndet);
		trsfbase(n,12,nhex);
		trsfbase(n,16,nduo);
		if(ndet==nduo&&ndet==nhex)
		{
			printf("%d\n",n);
			// printf("%d %d %d\n",ndet,nhex,ndet);
		}
		n++;
	}
}
void trsfbase(int n,int base,int &sum)
{
	if(n)
	{
		trsfbase(n/base,base,sum);
		sum+=(n%base);
	}
}
