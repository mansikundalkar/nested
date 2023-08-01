#include<stdio.h>
int main()
{
int a;
int b;
printf("enter a number of rows");
scanf("%d",&a);
printf("enter a number of coloum");
scanf("%d",&b);
for(int i=1;i<=a;i++){
for(int j=1;j<=b;j++){
printf("*");
}
printf("\n");
}
return 0;
}
