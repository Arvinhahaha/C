#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) m=a;
	if(c>a) m=c;
	int i=1;
	while(++i) if(!((m*i)%a)&& !((m*i)%b)&& !((m*i)%c)) break;
	printf("%d",m*i);
	return 0;
}
