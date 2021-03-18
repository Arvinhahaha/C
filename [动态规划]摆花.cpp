#include<iostream>
#include<algorithm> 
#define mod 1000007
#define N 105 
using namespace std;
//dp[i][j] i�ֻ���j��ķ���
int dp[N][N]; 
int main()
{
	//n�ֻ� ��Ҫ��m�� 
	int n,m;
	cin>>n>>m;
	int num[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		dp[i][0]=1; 
	}
	//1�ֻ���i�� 
	for(int i=1;i<=num[1];i++)
	dp[1][i]=1;
	//����ö��n�ֻ� 
	for(int i=2;i<=n;i++)
	{
		//һ��m�軨 
		for(int j=1;j<=m;j++)
		{
			//��n����num[n]�� 
			for(int k=0;k<=num[i]&&k<=j;k++)
			{
				dp[i][j]=(dp[i][j]+dp[i-1][j-k])%mod;
			}
		 } 
	}
	cout<<dp[n][m]<<endl;
	return 0;
 } 
