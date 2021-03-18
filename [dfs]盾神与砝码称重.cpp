#include<iostream>
#include<algorithm>
#define N 244
int a[N];
int value;
bool flag = false;
using namespace std;
void OPT(int sum,int num)
{
	if(value==sum) {flag = true; return ;};
	if(num<0) {return ;};
	OPT(sum+a[num],num-1);
	OPT(sum,num-1);
	OPT(sum-a[num],num-1);
}
int main()
{
	int n,m,i,j,x;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>a[i];
	while(m--)
	{
		cin>>value;
		flag=false;
		OPT(0,n-1);
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
