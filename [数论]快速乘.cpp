#include<iostream>
using namespace std;
typedef long long ll;
ll ksc(ll  x,ll y,ll p)
{
	ll res = 0;
	while(y)
	{
		if(y&1) res=(res+x)%p;
		x=(x<<1)%p;
		y>>=1;
	}
	return res;
 } 
int main()
{
	ll a,b,m;
	cin>>a>>b>>m;
	cout<<ksc(a,b,m)<<endl;
	return 0; 
}
