#include<stdio.h>
int main()
{
int n=51;
int t=47;
int k=577;
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=i;j++)
	{
	printf("%d ",k);
	}
	k = k - i;
	t = t - 2;
	printf("\n");
	}
	return 0;
	}
