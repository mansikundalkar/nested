#include<stdio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
for(int i=1;i<=n;i++){
int a;
a = i * i;
printf("%d\n",a);
}
return 0;
}
