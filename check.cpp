#include<iostream>
#include<algorithm>
#include<string>
#define N 101
using namespace std;
char map[N][N];
bool vis[N][N]={false};
int m;
bool inmap(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<m;
}
int dir_x[]={-1,0,1,0},dir_y[]={0,1,0,-1};
int res=0,minnum=10000;
void dfs(int x,int y,int step)
{
	if(map[x][y]=='B')
	{
		if(step<minnum) minnum=step;
		return;
	}
	int dx,dy;
	for(int i=0;i<4;i++)
	{
		dx=x+dir_x[i];dy=y+dir_y[i];
		if(!vis[dx][dy]&&inmap[dx][dy]&&map[dx][dy]!=map[x][y])
		{
				vis[dx][dy]=true;
				dfs(dx,dy,step+1);
				vis[dx][dy]=false;
			}
		}
	}
int main()
{
	cin>>m;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>map[i][j];
		}
 }
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		if(map[i][j]=='A')
		{
			dfs(i,j,0);
			break;
		}
		
	}
	if(minnum==10000) cout<<"-1"<<endl;
	else cout<<minnum<<endl;
	return 0;
}

