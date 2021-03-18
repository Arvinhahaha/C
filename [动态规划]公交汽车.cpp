#include<iostream>
#include<algorithm>
#include<cmath> 
using namespace std;
int main()
{
	int m[11],i,j,total=0,N;
	for(i=1;i<11;i++)
	cin>>m[i];
	cin>>N;
	int minfee[N+1];
	for(i=1;i<=min(N,10);i++)
	minfee[i]=m[i];
	if(N>10) {
		for(i=11;i<=N;i++)
		minfee[i]=50000;
	}
	for(i=2;i<=N;i++)
	{
		for(j=1;j<=i/2;j++)
		minfee[i]=min((minfee[i-j]+minfee[j]),minfee[i]);
	}
	cout<<minfee[N];
	return 0;
}
