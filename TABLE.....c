#include<stdio.h>
int main()
{
int n;
int a;
printf("enter a number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
a = i * j;
printf("%d",a);
}
printf("\n");
}
return 0;
}
