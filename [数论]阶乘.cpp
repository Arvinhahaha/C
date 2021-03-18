#include<stdio.h>
double fac(int k) {
	if(k==1||k==0) return 1;
	else return k*fac(k-1);
}
int main()
{
	double sum=0;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=1/fac(i);
	}
	printf("sum=%.5f",sum);
}
