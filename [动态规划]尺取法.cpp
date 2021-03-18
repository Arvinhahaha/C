#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int n,m,sum=0,num=0;
	cin>>n>>m;
	int a[n+1],dp[n+1]={0};
	for(int i=1;i<=n;i++)
	cin>>a[i]; 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			dp[i]=max(dp[i],dp[i-1]+a[j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(dp[i]>=n) {
			num=i;
			break;
		}
	}
	cout<<num<<endl;
}
