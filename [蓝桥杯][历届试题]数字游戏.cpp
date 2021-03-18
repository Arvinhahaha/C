#include<stdio.h>
int main()
{
	int n,k,T,i,j;
	int t;
	long long sum=0;
	scanf("%d%d%d",&n,&k,&T);
	long long int a[n*T+1];
	a[0]=1;
	for(i=1;i<n*T+1;i++)
		{
			a[i]=a[i-1]+i;
			if(a[i]>k-1) a[i]=a[i]%(k-1)-1; 
		}
		for(i=0,t=0;t<3;i+=n,t++)
		sum+=a[i];
		printf("%lld",sum);
		return 0;
 } 
