#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,m,res=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>*(a+i);
	for(int j=0;j<n;j++)
		{
			if(a[j]>m+30) res++;
		}
		printf("%d",res);
		return 0;
}
