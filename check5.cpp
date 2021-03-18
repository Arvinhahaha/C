#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N,cnt=0;
	cin>>N;
	int a[N],flag1=0,flag2=0;
	for(int i=0;i<N;i++)
	cin>>a[i];
	for(int i=1;i<N-1;i++)
	{ 	flag1=0;
		flag2=0;
		for(int t=0;t<i;t++)
		{
			if(a[t]<a[i]) flag1=1;
		}
		for(int j=i+1;j<N;j++)
		{
			if(a[j]>a[i]) flag2=1;
		}
		if(flag1&&flag2) 
		cnt++;
	}
	cout<<cnt;
	return 0;
}
