#include<iostream>
#include<algorithm>
typedef long long ll;
int a[30];
int b[30]; 
int n;
ll T;
ll sum = 0 ;
using namespace std;
void dfs(ll t,int pos,int i)
{
	int j;
	if(t==T&&pos!=0&&i<1)
	{
		sum++;
		for(j=pos-1;j>=0;j--)
		cout<<b[j]<<" ";
		cout<<endl;
	}
	else {
		if(i<1) return ;
		dfs(t,pos,i-1);
		t+=a[i];
		b[pos]=a[i];
		dfs(t,pos+1,i-1);
		t-=a[i];
	}
 }
int main()
{
	int i;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	cin>>T;
	dfs(0,0,n);
	cout<<sum<<endl;
	return 0;
 } 
 
