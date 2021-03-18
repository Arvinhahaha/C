#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const int MAXN = 1005;
int w[MAXN];//重量
int v[MAXN];//价值
int f[MAXN][MAXN];//
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>w[i]>>v[i];
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				
					f[i][j]=f[i-1][j];
				if(j>v[i]) 
					f[i][j]=max(f[i][j],(f[i-1][j-w[i]]+v[i]));
			}
		}
		cout<<f[n-1][m-1];
 } 
