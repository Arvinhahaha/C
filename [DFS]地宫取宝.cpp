#include<iostream>
#include<cstring>
#define N 51
#define M 51
#define MOD  1000000007
using namespace std;
int map[N][M];
int vis[N][M]={{false}};
int dir_x[]={1,0};
int dir_y[]={0,1};
int n,m,k;
long long int res=0;
int max=0,t=0;
//int a[N*M];
bool inmap(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n;
}
int dfs(int x,int y,int sum,int max)
{
	if(x==m-1&&y==n-1)
	{
		if(sum==k||sum+1==k&&map[x][y]>max)
		{
			return 1;
			cout<<t++<<endl;
		}
		
		else return 0;
	}
	int dx,dy;
	res=0;
	for(int i=0;i<2;i++)
	{
		dx=x+dir_x[i],dy=y+dir_y[i];
			if(inmap(dx,dy))
			{
				if(map[x][y]>max)
				{
//				cout<<t++<<endl;
				res+=dfs(dx,dy,sum+1,map[x][y]);
				}
				
				res+=dfs(dx,dy,sum,max);
			}
		}
		return res;
	}
int main()
{
	memset(map,-1,sizeof(map));
	int m,n,k;
	cin>>m>>n>>k;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin>>map[i][j];
	}
	dfs(0,0,0,-1);
	cout<<dfs(0,0,0,-1)%MOD<<endl;
}
