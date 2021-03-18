#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	cin>>n;
	int a[n],dp[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		dp[i]=1;
	}
	for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i]>=a[j])
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
		sort(dp,dp+n);
		cout<<dp[n-1]<<endl;
		return 0;
 } 
