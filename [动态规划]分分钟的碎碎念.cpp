#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int from[n+1],dp[n+1];
	for(i=1;i<=n;i++)
		{
			cin>>from[i];
			dp[i]=1;
		}
		for(i=1;i<=n;i++)
			{
				if(from[i]!=0)
				//×ªÒÆ·½³Ì 
				dp[i]=max(dp[from[i]]+1,dp[i]);
			}
			sort(dp+1,dp+n+1);
		cout<<dp[n]<<endl;
 } 
