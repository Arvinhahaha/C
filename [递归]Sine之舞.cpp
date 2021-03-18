#include<iostream>
#include<cstring>
using namespace std;
void An(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"sin("<<i+1;
		if(i%2==0&&i<n-1) cout<<'-';
		if(i%2!=0&&i<n-1) cout<<'+';
	}
	for(i=0;i<n;i++)
	cout<<')';
}
void Sn(int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		cout<<'(';
	}
	for(int i=1;i<=n;i++)
	{
		An(i);
		cout<<'+'<<n-i+1;
		if(i!=n) cout<<")";
	}
}
int main()
{
	int n;
	cin>>n;
	Sn(n);
	return 0;
}
