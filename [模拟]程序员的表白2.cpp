#include<stdio.h>
int  fun(int n)
{
int i;
for(i=0;i<=n;i++)
{
printf("*");
for(i=0;i<n;i++)
printf(" ");
printf("*\n");
}
return 0;
}
int main()
{
int n,i;
while(scanf("%d",&n)!=EOF)
{
for(i=0;i<n;i++)
{
fun(n);
}
for(i=0;i<n+2;i++)
printf("*");
printf("\n");
printf("\n");
}
}
