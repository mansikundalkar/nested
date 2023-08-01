#include<stdio.h>
int main()
{
int i,j;
for(int i=1;i<=10;i++)
{
for(int j=10;j>=i;j--)
{
printf("*");
}
printf("\n");
}
return 0;
}
