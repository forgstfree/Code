#include <cstdio>
#include <cstdlib>
char pro[3];
char idcard[40];
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",idcard);
		pro[0] = idcard[0];
		pro[1] = idcard[1];
		printf("He/She is from ");
		switch(atoi(pro))
		{
			case 33: printf("Zhejiang");	break;
			case 11: printf("Beijing");break;
			case 71: printf("Taiwan");break;
			case 81: printf("Hong Kong");break;
			case 82: printf("Macao");break;
			case 54: printf("Tibet");break;
			case 21: printf("Liaoning");break;
			case 31: printf("Shanghai");break;
			default: break;	
		}
		printf(",and his/her birthday is on ");
		printf("%c%c,%c%c,%c%c%c%c based on the table.\n",idcard[10],idcard[11],idcard[12],idcard[13],idcard[6],idcard[7],idcard[8],idcard[9]);
	}
}
