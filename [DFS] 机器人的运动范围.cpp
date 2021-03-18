#include<iostream>
#include<algorithm>
#include<cstring>
#define M 55
#define N 55
using namespace std;
int m,n,k;
int i,j;
int map[N][M];
int res=0;
int dir_x[]={-1,0,1,0},dir_y[]={0,1,0,-1};
bool inmap(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n;
}
bool vis[M][N];
int sum(int x,int y)
{
	int sum=0;
	while(x||y)
	{
	sum+=x%10+y%10;
	x/=10;
	y/=10;
	}
	return sum;
}
void dfs(int k,int x,int y)
{
//	if(!inmap(x,y)) return;
//	if(x==m||y==n) return;
	if(sum(x,y)<=k)
	{
		res++;
		vis[x][y]=true;
		return;
	}
	int dx,dy;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			for(int t=0;t<4;t++)
			{
				dx=x+dir_x[t];
				dy=y+dir_y[t];
			if(!vis[dx][dy])
				{
			     	vis[dx][dy]=true;
			    	dfs(k,dx,dy);
			    	vis[dx][dy]=false;
				}
			}
		}
		
	}
	
}
int main()
{
	memset(vis,0,sizeof(vis)); 
	cin>>k>>m>>n;
	dfs(k,0,0);
	cout<<res<<endl;
	return 0;	
}
