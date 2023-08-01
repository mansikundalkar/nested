#include<stdio.h>
int main()
{
int n;
int f=1;
printf("enter a number");
scanf("%d",&n);
for(int i=1;i<=n;){
f = f * n;
n = n - i;
printf("%d\n",f);
}
return 0;
}
