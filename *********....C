#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
			printf("*");
			}
			printf("\n");
			}
			{
				for(int k=1;n>=k;k++)
				{
					for(int p=1;p<=n-k;p++)
					{
					printf("*");
					}
					printf("\n");
					}
					}
return 0;
}				
