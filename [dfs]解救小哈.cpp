#include<iostream>
#include<algorithm>
#include<cstring>
#define N 51
int INF=999999;
using namespace std;
//����ͼ 
int map[N][N];
//�������
bool vis[N][N]={{false}};
//�������� 
int dir_x[4]={-1,0,1,0},dir_y[4]={0,1,0,-1};D
//����߽�
int m,n; 
//�Ƿ��ڵ�ͼ�� 
bool inmap(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n;
}
//������С����
int minstep=INF; 
//��ʼ���� �������� С�� С�� 
int start_x,start_y,end_x,end_y;
//dfs���� 
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
 
