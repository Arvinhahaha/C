#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<cmath>
#define N 100005
using namespace std; 
int A[N];
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	int n,i,j,max1=0,sum=0;
	int dp[N]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&A[i]);
	for(i=1;i<=n;i++)
	{
//		dp[i]=max(0,dp[i-1]+A[i]);
		sum+=A[i];
		if(sum>max1) max1=sum;
		if(sum<0) sum=0;
	}
	
	printf("%d",max1);
	return 0;
}
