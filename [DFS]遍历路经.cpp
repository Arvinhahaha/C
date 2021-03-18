/*

S * * .
. . . .
* * * T 

*/
#include<iostream>
#include<string>
using namespace std;
int n,m;
string maze[110];
bool vis[110][110];
bool in(int x,int y)
{
	return 0<=x&&x<n&&y>=0&&y<m;
}
bool dfs(int x,int y)
{
	if(maze[x][y]=='T'){
		return true;
	}
	vis[x][y]=true;
	maze[x][y]='m';
	//up 2维数组角度 
	int tx=x-1,ty=y;
	if(in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty]){
		if(dfs(tx,ty)){
			return true;
		}
	}
	//right
	tx=x;ty=y+1;
	if(in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty]){
		if(dfs(tx,ty)){
			return true;
		}
	}
	//down
	tx=x+1;ty=y;
	if(in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty]){
		if(dfs(tx,ty)){
			return true;
		}
	}
	//left
	tx=x;ty=y-1;
	if(in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty]){
		if(dfs(tx,ty)){
			return true;
		}
	}
	//取消标记 
	vis[x][y]=false;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>maze[i];
	}
	int x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(maze[i][j]=='S'){
				x=i,y=j;
			}
		}
	}
	cout<<endl;
	if(dfs(x,y))
	{
		for(int i=0;i<n;i++)
		{
			cout<<maze[i]<<endl;
		}
		
	}
	else{
			cout<<"NO"<<endl;
		}
}


