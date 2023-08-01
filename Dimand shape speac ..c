#include<stdio.h>
int main()
{
int n,i,j;
int p=1;
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	      for(j=1;j<=n-i;j++)
	      {
	      printf(" ");
	      }
	            if(i==1)
	            {
	            printf(" * ");
	            } 
	               else 
	               {
	               printf("*");
	                           for(j=1;j<=p;j++)
	                           {
	                           printf(" ");
	                           }
	                           printf("*");
	               }
	                           printf("\n");
	                           p=p+2;
	 }
	                           
	                           int k=p-2;
	                              for(i=n-1;i>=1;i--)
	                              {
	                                  for(j=1;j<=n-i;j++)
	                                  {
	                                  printf(" ");
	                                  }
	                                    if(i==1)
	                                    {
	                                    printf(" * ");
	                                    }
	                                       else 
	                                       {
	                                       printf("*");
	                                                 for(j=1;j<k;j++)
	                                                 {
	                                                 printf(" ");
	                                                 }
	                                                 printf("* ");
	                                       }
	                                                 printf("\n");
	                                                 k=k-2;
	                               }
	                                 return 0;
}	                                                 
	                              
	                           
	               
	               
	               
