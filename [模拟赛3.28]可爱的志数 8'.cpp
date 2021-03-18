#include<iostream>
using namespace std;
bool check(int n)
{
	int res=1;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0) res++;
		if(res>=3) return true;
	}
}
int main()
{
	int res=0;
	for(int i=1;i<=200328;i++)
	{
		if(check(i)) res++;
	}
	cout<<res;
}
