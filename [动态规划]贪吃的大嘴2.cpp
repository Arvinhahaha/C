#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m,n,i;
	cin>>m>>n;
	int a[n+1],dp[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i]=20010;
	}
	//完全背包问题 
	for(j=m;j>=0;j--)
	{
		for(int k=1;k<s&&k*w<=j;k++)
		dp[j]=min(dp[j],dp[j-k*w]+k);
	}
	if(dp[m]!=N) cout<<dp[m]<<endl;
	else cout<<"><"<<endl;
	return 0;
 } 
