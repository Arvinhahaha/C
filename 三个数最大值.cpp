#include<stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	int t;
	t=a>b?a:b;
	t=t>c?t:c;
	printf("%d",t);
}
