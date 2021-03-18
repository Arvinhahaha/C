#include<iostream>
#include<algorithm>
#include<cstring>
#define n 10005
//iÖÖÎïÆ· j kg
int dp[n][n];
int f[n];
int v[n],w[n];
using namespace std;
int main()
{
    memset(dp,0,sizeof(dp));
    int N,V,i,j;
    cin>>N>>V;
    for(i=1;i<=N;i++)
    cin>>v[i]>>w[i];
    f[0]=0;
    for(i=1;i<=N;i++)
    {
        for(j=V;j>=0;j--)
        {
        	if(j>=v[i])
        	{
        	dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
///			f[j]=max(f[j],f[j-v[i]]+w[i]);
			}
			else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[N][V]<<endl;
    return 0;
}
