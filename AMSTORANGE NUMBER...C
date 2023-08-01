#include<stdio.h>
int main()
{
int n,r;
int sum = 0;
	printf("enter a number");
	scanf("%d",&n);
	
	if(n>0)
	{
	r = n % 10;
	sum = sum  + r * r * r;
	n = n / 10;
	}
	else if(sum==n)
	{
	printf("amstorang number");
	}
	else
	{
	printf("not amstorang number");
	}
	return 0;
	}
	
