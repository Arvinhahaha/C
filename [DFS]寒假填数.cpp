#include<iostream>
using namespace std;
int a[13];
bool used[13]={false};
int res=0;
void dfs(int x)
{
	if(x==3)
	{
		if(a[0]+a[1]!=a[2])
		return;
	}
	if(x==6)
	{
		if(a[3]-a[4]!=a[5])
		return;
	}
	if(x==9)
	{
		if(a[6]*a[7]!=a[8])
		{
			return;
		}
	}
	if(x==12)
	{
		if(a[10]*a[11]==a[9])
		{
			res++;
			return;
		}
	}
	for(int i=0;i<13;i++)
	{
		if(used[i+1]==0)
		{
			a[x]=i+1;
			used[i]=true;
			dfs(x+1);
			used[i]=false; 
		}
	}
}
int main()
{
	dfs(0);
	cout<<res<<endl;
	return 0;
}
