#include<iostream>
#define N 105
#include<algorithm>
using namespace std;
int m,n;
int a[N][N],b[N][N];
int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
for(int i=0;i<n;i++)
{
	for(int j=m-1;j>=0;j--)
	cout<<a[i][j]<<" ";
	cout<<endl;
}
}
