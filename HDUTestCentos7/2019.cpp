#include <cstdio>
int main()
{
	int n,m;
	int i;
	int x;
	bool flag;
	while(~scanf("%d %d",&n,&m)&&(n!=0||m!=0))
	{
		flag = true;
		for(i=0;i<n;i++)	
		{
			scanf("%d",&x);
			if(flag)
			{
				if(x<m)
				{
					printf("%d ",x);
				}
				else
				{
					flag = false;
					printf("%d %d",m,x);
				}
			}
			else
				printf(" %d",x);
		}
		if(flag)
			printf("%d",m);
		printf("\n");
//		for(int i=0;i<n;i++)
//			scanf("%d",&dat[i]);
//		for(int i=n;i>0;i--)
//		{
//			if(dat[i-1]>m)
//				dat[i] = dat[i-1];
//			else
//			{
//				dat[i] = m;
//				break;
//			}
//		}
	}
}
