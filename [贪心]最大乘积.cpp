#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}
int main()
{
	int n,T,m,i,j,sum=1;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,compare);
		for(i=0;i<m;i++)
		sum*=a[i];
		cout<<sum<<endl;
	}
	return 0;
}
