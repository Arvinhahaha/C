#include<iostream>
#include<algorithm> 
#define mod 1000007
#define N 105 
using namespace std;
//dp[i][j] i种花摆j盆的方案
int dp[N][N]; 
int main()
{
	//n种花 需要摆m盆 
	int n,m;
	cin>>n>>m;
	int num[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		dp[i][0]=1; 
	}
	//1种花摆i盆 
	for(int i=1;i<=num[1];i++)
	dp[1][i]=1;
	//可以枚举n种花 
	for(int i=2;i<=n;i++)
	{
		//一共m盆花 
		for(int j=1;j<=m;j++)
		{
			//第n种有num[n]种 
			for(int k=0;k<=num[i]&&k<=j;k++)
			{
				dp[i][j]=(dp[i][j]+dp[i-1][j-k])%mod;
			}
		 } 
	}
	cout<<dp[n][m]<<endl;
	return 0;
 } 
