#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
int n,k,T;
int main() 
{
	ll f(int n);
	ll sum=0;
	int i;
	cin>>n>>k>>T;
	for(i=1;i<=n*T;i+=n)
	{
		sum+=(f(i))%13;
	}
	cout<<sum<<endl;
	return 0;
}
ll f(int n)
{
	if(n==1) return 1;
	else return f(n-1)+(n-1);
 }
