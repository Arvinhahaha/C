#include<stdio.h>
int F(int n)
{
	if(n==1) return 1;
	else if(n==2) return 2;
	else if(n==3) return 3;
	else return F(n-1)+F(n-3); 
}
int main()
{
	int n;
	while(scanf("%d",&n)&&n)
	{
		printf("%d\n",F(n));
	}
	return 0;
}
