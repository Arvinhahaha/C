#include<iostream>
using namespace std;
int main()
{
	int m,n,m1,n1;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++)
	cin>>a[i];
	for(int j=0;j<n;j++)
	cin>>b[j];
	cin>>m1>>n1;
	for(int i=0;i<m1;i++)
	cout<<a[i]<<",";
	for(int j=0;j<n1-1;j++)
	cout<<b[j]<<",";
	cout<<b[n1-1]<<endl;
 } 
