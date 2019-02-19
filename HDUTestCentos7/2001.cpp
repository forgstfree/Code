#include <cstdio>
#include <cmath>
double point[10];
double dis;
int main()
{
	while(~scanf("%lf %lf %lf %lf",&point[0],&point[1],&point[2],&point[3]))
	{
		for(int i=0;i<4;i++)
		{
			printf("%.2f ,",point[i]);
		}
		dis = (point[0]-point[2])*(point[0]-point[2])+(point[1]-point[3])*(point[1]-point[3]);
		dis = sqrt(dis);
		printf("%.2f",dis);
	}
}
