#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int n,k,cnt;
char c[102][102];
int flag[102]={0};
void dfs(int x,int y,int num)
{
	if(num>k){
		cnt++;
		return;
	}
	for(int i=x;i<n;i++)
		{
			for(int j=y;j<n;j++)
				{
					if(flag[j]==0&&c[i][j]=='#')
					{
						flag[j]=1;
						dfs(i+1,0,num+1);
						flag[j]=0;
					}
				}
		}
}
int main()
{
	while(scanf("%d%d",&n,&k)&&((n!=-1)&&(k!=-1)))
	{
		for(int i=0;i<n;i++)
		scanf("%s",c[i]);
		cnt=0;
		memset(flag,0,sizeof(flag));
		dfs(0,0,1);
		cout<<cnt;
	}
	return 0;
	
}
