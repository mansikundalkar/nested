#include<stdio.h>
int main()
{
int n;
int sum  = 0;
int a = 0;
int b = 1;
	printf("enter a number");
	scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
		if(i<=n)
		{
		sum = a + b;
		a = b;
		b = sum;
		printf("%d ",sum);
		}
		}
		return 0;
		}
		
