#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(void)
{
	int a,b;
	double res;
	char f;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		getchar();
		scanf("%c %d %d",&f,&a,&b);
		switch(f)
		{
			case '+': 
				cout<<a+b;	break;
			case '-':
				cout<<a-b;	break;
			case '*':
				cout<<a*b;	break;
			case '/':
				if(a%b==0)
					cout<<a/b;
				else
					printf("%.2f",1.0*a/b);
				// res = (double)a/b;
				// if(abs(res-a/b)>0.001)
				// 	printf("%.2f",res);
				// else
				// 	cout<<a/b;
			default:
				break;
		}
		cout<<endl;
	}
}
