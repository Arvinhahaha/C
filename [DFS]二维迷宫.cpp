#include<iostream>
#include<algorithm>
#define N 1005
#define M 1005
using namespace std;
int m,n;
char map[M][N];
bool vis[M][N]={false};
bool inmap(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n;
}
int dirx[]={-1,0,1,0};
int diry[]={0,1,0,-1};
bool flag=false;
void dfs(int x,int y)
{
	if(x==m-1&&y==n-1) {flag=true; return;}
	else {
		int dx,dy;
		for(int i=0;i<4;i++)
		{
			dx=x+dirx[i];
			dy=y+diry[i];
			if(!vis[dx][dy]&&map[dx][dy]=='.')
			{
			vis[dx][dy]=true;
				dfs(dx,dy);
			vis[dx][dy]=false;
			}	
		}
		return ;
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
		dfs(0,0);
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	return 0;
}
