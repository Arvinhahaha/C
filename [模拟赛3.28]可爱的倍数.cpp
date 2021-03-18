#include<iostream>
using namespace std;
bool check(int n)
{
	if(n==1||n==0) return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return false;
	}
	return true;
 }
int main()
{
	int res=0;
	for(int i=1;i<=200;i++)
	{
		if(check(i)) res++;
	}
	cout<<res;
 } 
