#include <cstdio>
#include <iostream>
#include <cstring>
#define MAXNUM 2000
using namespace std;
int main(void)
{
	char ch[MAXNUM];
	int i;
	unsigned long int checksum;
	freopen("in.data","r",stdin);
	while(cin.getline(ch,MAXNUM-1)&&ch[0]!='#')
	{
		checksum=0;
		for(i=0;i<strlen(ch);i++)
		{
			if(ch[i]!=' ')
			{
				checksum += ((ch[i]-'A'+1)*(i+1));
			}
		}
		printf("%ld\n",checksum);
	}

}
