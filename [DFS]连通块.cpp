#include<iostream>
#include<algorithm>
#define N 1005
#define M 1005
using namespace std;
int n,m;
char map[N][M];
int xdir[]={0,0,1,-1,1,-1,-1,1},ydir[]={1,-1,0,0,1,-1,1,-1};
int res=0;
bool inmap(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n;
}
void dfs(int x,int y)
{
	if(map[x][y]=='W')
	map[x][y]='.';
	else return;
	int dx,dy;
	for(int i=0;i<8;i++)
	{
		dx=x+xdir[i];
		dy=y+ydir[i];
		if(inmap(dx,dy))
		dfs(dx,dy);
	}
}
int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin>>map[i][j];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(map[i][j]=='W')
			{
				res++;
				dfs(i,j);
			}
		}
	}
	cout<<res<<endl;
 } 
