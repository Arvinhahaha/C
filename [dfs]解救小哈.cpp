#include<iostream>
#include<algorithm>
#include<cstring>
#define N 51
int INF=999999;
using namespace std;
//描绘地图 
int map[N][N];
//标记数组
bool vis[N][N]={{false}};
//方向向量 
int dir_x[4]={-1,0,1,0},dir_y[4]={0,1,0,-1};D
//定义边界
int m,n; 
//是否在地图内 
bool inmap(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n;
}
//定义最小步数
int minstep=INF; 
//开始坐标 结束坐标 小哼 小哈 
int start_x,start_y,end_x,end_y;
//dfs函数 
void dfs(int x,int y,int step)
{
	if(x==end_x&&y==end_y)
	{
		if(step<minstep) 
			minstep=step;
		return;
		
	}
	int dx,dy;
	for(int i=0;i<4;i++)
	{
		dx=x+dir_x[i];
		dy=y+dir_y[i];
		if(inmap(dx,dy)&&(vis[dx][dy]==0))
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
//	memset(map,0,sizeof(map));
//	memset(vis,0,sizeof(vis)); 
	cin>>m>>n;
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		cin>>map[i][j];
//	}
	cin>>start_x>>start_y>>end_x>>end_y;
	vis[start_x][start_y]=1;
	dfs(start_x,start_y,0);
	cout<<minstep<<endl;
	return 0;
}
 
