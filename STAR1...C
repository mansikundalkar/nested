#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n-i;j++)
			{
			printf(" ");
			}
				for(int j=1;j<=i;j++)
				{
				printf("*");
				}
				printf("\n");
				}
				{       
					for(int k=1;k<=n;k++)
					{
						for(int j=1;j<=k;j++)
						{
						printf(" ");
						}
						
							for(int j=1;j<=n-k;j++)
							{
							printf("*");
							}
							printf("\n");
							}
							}
							
							
						
return 0;
}							
					
				
				
				
				
