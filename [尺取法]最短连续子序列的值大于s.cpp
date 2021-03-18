#include<iostream>
#include<algorithm>
#include<cstring>
#define MAX 100005
#define INF 0x3f3f3f3f
typedef long long ll;
using namespace std;
ll a[100010];
int n,t,ans=INF;
ll sum,s;
int main()
{
	cin>>n>>s;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int st=0,en=0;
	ans=INF;sum=0;
	while(1)
	{
		while(en<n&&sum<s)
		sum+=a[en++];
		if(sum<s) break;
		ans=min(ans,en-st);
		sum-=a[st++];
	}
	if(ans==INF) ans=0;
	cout<<ans<<endl; 
}
