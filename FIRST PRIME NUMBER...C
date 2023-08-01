#include<stdio.h>
int main()
{
int n;
int sum = 0;
	printf("enter a number");
	scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
		for(int j=1;j<=i;j++)
		{
		if(i%j==0)
		{
		sum  = sum + i;
		printf("%d ",sum);
		}
		else
		{
		printf("%d ",i);
		}
		}
		}
		return 0;
		}
