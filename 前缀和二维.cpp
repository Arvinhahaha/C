#include<iostream>
#define N 1005
#define M 200000
using namespace std; 
int s[N][N];
int n,m,q,x1[M],x2[M],y1[M],y2[M];
int main()
{
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>s[i][j];
			s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
		}
	}
	for(int i=1;i<=q;i++)
	{
		cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
	}
	for(int i=1;i<=q;i++)
	{
		cout<<s[x2[i]][y2[i]]-s[x1[i]-1][y2[i]]-s[x2[i]][y1[i]-1]+s[x1[i]-1][y1[i]-1]<<endl;
	}
 } 
