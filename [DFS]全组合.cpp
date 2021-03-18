#include<iostream>
#include<algorithm>
#define N 11
#define M 10
using namespace std; 
//int a[N]={0,1,2,3,4,5,6,7,8,9,10};
int b[N];
int n,m;
bool used[N]={false};
int judge(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1]) return false;
	}
	return true;
}
void dfs(int x,int n,int m)
{
	if(x==m&&judge(b,m))
	{
		for(int i=0;i<m;i++)
		cout<<b[i]<<" ";
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!used[i])
		{
			b[x]=i;
			used[i]=true;
			dfs(x+1,n,m);
			used[i]=false;
		}
	}
}
int main()
{
	cin>>n>>m;
	dfs(0,n,m);
	return 0;
}
