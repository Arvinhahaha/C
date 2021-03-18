#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>

using namespace std;
typedef pair<int,int> PII; 



//定义边界
int n,m; 
//最大地图
const int N=1010;
//初始距离
int d[N][N];
//MAP
char map[N][N];
void bfs()
{
	memset(d,-1,sizeof(d));
	queue<PII> 	q;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(map[i][j]=='1')
			{
			 q.push({i,j});
		   	 d[i][j]=0;
			}
		}
	 }
	 int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
	 
	 while(q.size())
	 {
	 	auto t=q.front();
	 	q.pop();
	 	int x=t.first,y=t.second;
	 	for(int i=0;i<4;i++)
	 	{
	 		int a=x+dx[i],b=y+dy[i];
	 		if(a>=0&&a<m&&b>=0&&b<n&&d[a][b]==-1)
	 		{
	 			d[a][b]=d[x][y]+1;
	 			q.push({a,b});
			 }
		 }
	 }
 }
 int main()
 {
 	cin>>m>>n;
 	for(int i=0;i<m;i++)
 	{
 		scanf("%s",map[i]);
	 }
	 bfs();
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	printf("%d ",d[i][j]);
	 	printf("\n");
	 }
	 return 0;
  } 
