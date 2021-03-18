#include<iostream>
typedef long long ll;
using namespace std;
ll Binarypow(ll a,ll b,ll m)
{
	ll num; 
	if(b==0) return 1;
	else if(b%2) return a*Binarypow(a,b-1,m)%m;
	else num=Binarypow(a,b/2,m)%m;
	return num*num%m;
}
int main()
{
	ll a,b,m;
	cin>>a>>b>>m;
	cout<<Binarypow(a,b,m);
	return 0;
}
 
