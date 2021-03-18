#include<iostream>
#include<algorithm>
#define n 10005
int v[n],w[n],s[n];
//n体积的价值 
int dp[n];
using namespace std;
int main()
{
    int N,V,i,j;
    cin>>N>>V;
    dp[0] = 0;
    for(i=1;i<=N;i++)
    cin>>v[i]>>w[i]>>s[i];
    for(i=1;i<=N;i++)
    {
        for(j=V;j>=0;j--)
        {
            for(int k=1;k<=s[i];k++)
            {
                if(j>=k*v[i]) dp[j]=max(dp[j],dp[j-k*v[i]]+k*w[i]);
            }
        }
    }
    cout<<dp[V]<<endl;
    return 0;
}
