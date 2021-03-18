#include<iostream>
#include<algorithm>
#define N 105
using namespace std;
/*
滑窗 
+++字符串 
他的决定点 dp[j]=max(dp[j],dp[j+1])+a[i][j];
*/ 
int n,a[N][N],dp[N];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
		cin>>a[i][j];
		dp[j]=a[i][j];
		}
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			dp[j]=max(dp[j],dp[j+1])+a[i][j];
		}
	}
	cout<<dp[1]<<endl;
	return 0;
}
 
