#include<iostream>
#include<algorithm>
#include<set> 
bool cmp(int x,int y)
{
	return x<y;
}
using namespace std;
int main()
{
	int n,i,t;
	cin>>n;
	int cnt=n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
		if(a[i]==a[i+1])
		cnt--;

	cout<<cnt<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		continue;
		cout<<a[i]<<" ";	
	}
	
	return 0;
}
