#include<iostream>
using namespace std;
int main()
{
	int res=2;
	int  N=1200000;
	for(int i=2;i<=N/2;i++)
	{
		if(N%i==0) res++;
	}
	cout<<res;
 } 
