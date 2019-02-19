#include <iostream>
#include <cstdio>
#define MAXNUM 10
char ch[MAXNUM];
void insertsort(char *d,int len);
int main(void)
{
	while(~scanf("%s",ch))
	{
		insertsort(ch,3);
		printf("%c %c %c\n",ch[0],ch[1],ch[2]);
	}
}
void insertsort(char *d,int len)
{
	char temp;
	int i,j;
	for(i=1;i<len;i++)
	{
		temp = d[i];
		for(j=i-1;j>=0&&d[j]>temp;j--)
		{
			d[j+1] = d[j];
		}
		d[j+1]=temp;
	}
}
