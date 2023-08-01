#include<stdio.h>
int main()
{
int n;
int a;
printf("enter a number");
scanf("%d",&n);
a = n;
for(int i=1;i<=n;i++){
for(int j=1;j<=a;j++){
printf("%d",a);
a--;
}
printf("\n");
}
return 0;
}
