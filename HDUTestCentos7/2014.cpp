#include <cstdio>
#define MAXNUM 1000
int grades[MAXNUM];
int position(int *d,int low,int high);
void myqsort(int *d,int low,int high);
int main()
{
	int n;
	int sum; 
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&grades[i]);
		}
//		printf("pre sort\n");
//		for(int i=0;i<n;i++)
//		{
//			printf("%d ",grades[i]);
//		}
		myqsort(grades,0,n-1);
		sum = 0;
//		printf("post sort\n");
//		for(int i=0;i<n;i++)
//		{
//			printf("%d ",grades[i]);
//		}
		for(int i=1;i<n-1;i++)
		{
			sum+=grades[i];
		}
//		printf("sum:%d",sum);
		printf("%.2f\n",sum*1.0/(n-2));
	}
}
// 对[low,high]进行分流
int position(int *d,int low,int high)
{
	int temp=d[low];
	while(low<high)
	{
		while(low<high&&d[high]>=temp) high--;
		d[low] = d[high];
		while(low<high&&d[low]<=temp) low++;
		d[high] = d[low];
	}
	d[low] = temp;
	return low;
}
void myqsort(int *d,int low,int high)
{
	if(low<high)
	{
		int pos = position(d,low,high);
		myqsort(d,low,pos-1);
		myqsort(d,pos+1,high);
	}
}
