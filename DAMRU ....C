#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
			}
				for(int j=1;j<=i;j++)
				{
					printf("* ");
					}
						printf("\n");
						}
int p;
	for(p=1;p<=n;p++)
	{
		for(int j=1;j<=n-p;j++)
		{
			printf(" ");
			}
				for(int j=1;j<=p;j++)
				{
					printf("* ");
					}
						printf("\n");
						}
						return 0;
						}

						
