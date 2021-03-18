#include<iostream>
#include<algorithm>
#define N 100005
using namespace std;
int a[N],m,n,b[N][2];
int near_sum(int a[],int n,int x0,int x1,int sum)
{
	int s0=0;
	if(x0>x1) return sum;
	return near_sum(a,n,x0+1,x1,sum+a[x0]);
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=0;i<m;i++)
	cin>>b[i][0]>>b[i][1];
	for(int i=0;i<m;i++)
	{
		int sum=0;
		sum=near_sum(a,n,b[i][0],b[i][1],0);
		cout<<sum<<endl;	
	}
	return 0;
}
//ÔËÐÐ³¬Ê± 
