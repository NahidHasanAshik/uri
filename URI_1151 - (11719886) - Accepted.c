#include<stdio.h>

int main()
{
int a=0,b=1,c=0,n,i;
scanf("%d",&n);
for(i=1;i<n;i++)
{

printf("%d ",a);
c=a+b;
a=b;
b=c;
}
printf("%d\n",a);

return 0;
}
