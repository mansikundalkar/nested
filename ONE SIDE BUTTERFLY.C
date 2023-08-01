#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
			}
			printf("\n");
			}
				for(int j=n;j>=1;j--)
				{
					for(int p=1;p<=j;p++)
					{
						printf("* ");
						}
							printf("\n");
							}
							return 0;
							}
