#include<iostream>
#include<cstring>
#include<algorithm>
#define N 10005
#define INF 999999
using namespace std;
int map[N][N];
bool vis[N][N];
int dir_x[]={-1,0,1,0},dir_y[]={0,1,0,-1};
int m,n;
bool inmap(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n;
}
int minstep=INF;
int start_x,start_y,end_x,end_y;
void dfs(int x,int y,int step)
{
	if(x==end_x&&y==end_y)
	{
		if(step<minstep) 
		minstep=step;
		return ; 
	}
	int dx,dy;
	for(int i=0;i<4;i++)
	{
		dx=x+dir_x[i],dy=y+dir_y[i];
		if(!vis[dx][dy]&&inmap(dx,dy))
		{
			vis[dx][dy]=true;
			dfs(dx,dy,step+1);
			vis[dx][dy]=false;
		 } 
	}
	return ;
}
int main()
{
	memset(map,0,sizeof(map));
	memset(vis,0,sizeof(vis));
	cin>>m>>n;
	cin>>start_x>>start_y>>end_x>>end_y;
	vis[start_x][start_y]=true;
	dfs(start_x,start_y,0);
	cout<<minstep<<endl;
}
