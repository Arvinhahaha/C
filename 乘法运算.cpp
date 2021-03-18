#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	t=b;
	printf("%d\n%d\n",a,b);
	while(b!=0)
		{
			printf("%d\n",a*(b%10));
			b/=10;
		}
		if(t>10)
		printf("%d\n",a*t);
}
