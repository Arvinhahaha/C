#include<iostream>
#include<algorithm> 
#include<queue>
#define N 105
using namespace std;
char m,n;
int map[N][N];
bool vis[N][N]={{false}};
const int dir_x[]={-1,-1,0,1,1,1,0,-1};
const int dir_y[]={0,1,1,1,0,-1,-1,-1};
typedef  pair<int,int> PII;
queue<PII> q;
bool check(int x,int y)
{
	return x>=0&&x<m&&y>=0&&y<n&&!vis[x][y]&&map[x][y]!='*';
}
PII st,now;
int cnt,ans,dis[N][N];
void bfs()
{
	q.push(st);
	dis[st.first][st.second]=0;
	vis[st.first][st.second]=1;
	while(q.size())
	{
		now=q.front();
		q.pop();
		for(int i=0;i<8;i++)
		{
			int dx=now.first+dir_x[i],dy=now.second+dir_y[i];
			if(check(dx,dy))
			{
				cnt--;
				vis[dx][dy]=1;
				dis[dx][dy]=dis[now.first][now.second]+1;
				ans=max(ans,dis[dx][dy]);
				q.push(make_pair(dx,dy));
				if(cnt==0)
				return ;
			}
		}
	}
}
int main()
{
    scanf("%d%d%d%d\n",&m,&n,&st.second,&st.first);//读入真是博大精深啊!!!!!
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<m; j++)
        {
            map[i][j]=getchar();
            if (map[i][j]=='.')
                cnt++;//统计有多少个空
        }
        getchar();
    }
    if (map[st.first][st.second]=='.')//刚开始就有一根乳草.
        cnt--;
    bfs();
    cout<<ans;
}

