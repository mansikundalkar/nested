#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
			}
				for(int j=1;j<=i;j++)
				{
					printf("* ");
					}
	for(int j=1;j<=n-i;j++)
	{
	printf("  ");
	}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
			}
			printf("\n");
			}


int p=n+n;
int i,j;
          for(i=1;i<=p;i++)
          {
               for(j=1;j<=i;j++)
               {
               printf(" ");
               }
                    for(j=1;j<=p-i;j++)
                    {
                    printf("* ");
                    }
                    printf("\n");
                    }
                    return 0;
                    }
