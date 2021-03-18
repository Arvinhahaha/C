#include<iostream>
#include<cmath> 
#include<algorithm>
using namespace std;
int a[110][110];
int dp[110][110];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		dp[0][0]=0;
		for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
					{
						if(i==0&&j==0)
						continue;
						else if(i==0)
						dp[i][j]=dp[i][j-1]+a[i][j];
						else if(j==0)
						dp[i][j]=dp[i-1][j]+a[i][j];
						else dp[i][j]=min(dp[i-1][j],dp[i][j-1])+a[i][j];
					}
			}
			cout<<dp[n-1][n-1]<<endl;
}

