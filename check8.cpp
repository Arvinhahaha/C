#include<iostream>
#include<algorithm>
#include<cstring>
#define N 1005
#define M 1005
char map[M][N];
using namespace std;
int m,n,k;
bool judge(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n;
}
int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int main()
{
	int p,q;
	cin>>m>>n>>k;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin>>map[i][j];
	}
	while(k--){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(map[i][j]=='g')
			{
				for(int t=0;t<4;t++)
				{
				if(judge(i+dir[t][0],j+dir[t][1]));
				map[i+dir[t][0]][j+dir[t][1]]='g';
				}	
			}	
		}
	}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<map[i][j];
		 } 
		 cout<<endl;
	}
}

