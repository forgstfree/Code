#include <cstdio>
#include <cstdlib>
#define MAXNUM 110
int dat[MAXNUM];
int com(const void *a,const void *b);
int main()
{
	int n;
	int i;
	while(scanf("%d",&n)&&n)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&dat[i]);
		}
		qsort(dat,n,sizeof(dat[0]),com);
		for(i=0;i<n;i++)
		{
			if(i)
				printf(" %d",dat[i]);
			else
				printf("%d",dat[i]);
		}
		printf("\n");
	}
}
int com(const void *a,const void *b)
{
	int aa=*(int *)a;
	int bb=*(int *)b;
	return abs(bb)-abs(aa);
}
