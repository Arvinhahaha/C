#include<iostream>
#include<algorithm>
#include<string>
int a[10];
using namespace std;
bool check(int N)
{
	int t=N,i=0;
	while(t)
	{
		a[i]=t%10;
		t/=10;
		i++;
	}
	for(int j=i-1;j>0;j--)
	{
		if(a[j]>a[j-1])
		return false;
	}
	return true;
}
int main()
{
	int n,b,res=0;
	cin>>b;
	for(int i=1;i<=b;i++)
	{
		if(check(i)) res++;
	}
	cout<<res<<endl;
}
