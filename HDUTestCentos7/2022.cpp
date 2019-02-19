#include <cstdio>
#include <cstdlib>
#include <cmath>
int mm_x,mm_y;
int maxgrade;
int main()
{
	int n,m;
	int grade;
	while(~scanf("%d %d",&m,&n))
	{
		mm_x = mm_y = 0;
		maxgrade = 0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&grade);
				if(abs(grade)>abs(maxgrade))
				{
					maxgrade = grade;
					mm_x = i;
					mm_y = j;
				}
			}
		}
		printf("%d %d %d\n",1+mm_x,1+mm_y,maxgrade);
	}
}
