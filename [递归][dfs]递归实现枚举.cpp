#include<iostream>
using namespace std;
typedef long long ll;

int n;
int a[20];
bool vis[20]={false};

//һ����tar���ӣ���ǰö�ٵ���pos����
void dfs(int pos,int tar)
{
	if(pos==tar+1)
	{
		for(int i=tar;i>=tar;i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	
	//ѡ�����
	for(int i=1;i<=n;i++)
	{ 
		if(!vis[i])
		{
			vis[i]=true;
			a[pos]=i;
			dfs(pos+1,tar);
			vis[i]=false;
		}
	} 
 }
 
 
//
 int main()
 {
 	void dfs2(int pos,int start,int tar);
 	cin>>n;
 	for(int i=1;i<=n;i++)
 	dfs2(1,1,i);
 	return 0;
  } 
  
void dfs2(int pos,int start,int tar)
{
	if(pos==tar+1)
	{
		for(int i=1;i<=tar;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
}
	for(int i=start;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			a[pos]=i;
			dfs2(pos+1,i+1,tar);
			vis[i]=false;
		}
	}
}
