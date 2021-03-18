#include<iostream>
using namespace std;
typedef long long ll;
ll f(int n)
{
	if(n==0||n==1) return 1;
	else return n*f(n-1);
}
int main()
{
	ll sum=0;
	int n;
	cin>>n;
	while(n>0)
	{
		sum+=f(n);
		n--;
	}
	cout<<sum;
}
