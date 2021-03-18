#include<iostream>
#include<algorithm>
#define N 1005
bool cmp(int x,int y)
{
	return x>y;
}
using namespace std; 
int a[N],dp[N];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i]=1;
	}
	dp[0]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		if(a[i]>a[j])dp[i]=max(dp[i],dp[j]+1);
	}
		sort(dp,dp+n+1,cmp);
//		for(int i=0;i<n;i++)
		cout<<dp[0]<<endl;
	return 0;
}

