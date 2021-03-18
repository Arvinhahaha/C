#include<iostream>
#include<cstring>
#include<algorithm>
#define n 10005
int v[n],w[n],s[n];
//i种产品 质量v下的价值 
int dp[n][n];
using namespace std;
int main()
{
    int N,V,i,j;
    cin>>N>>V;
    memset(dp,0,sizeof(dp));
    dp[0][0] = 0;
    for(i=1;i<=N;i++)
    cin>>v[i]>>w[i]>>s[i];
    for(i=1;i<=N;i++)
    {
        for(j=V;j>=0;j--)
        {
           for(int k=0;k<=s[i];k++)
           if(j>=k*v[i])
            {
                dp[i][j]=max(dp[i][j],dp[i-1][j-k*v[i]]+w[i]*k);
            }
        }
    }
    cout<<dp[N][V]<<endl;
    return 0;
}
