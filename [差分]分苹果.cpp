#include<iostream>
#include<cstring>
#define N 100005
using namespace std; 
int L[N],R[N],C[N],f[N],d[N];
//��i��С���ѱȵ�i-1��С���Ѷ���� 
int n,m;
int main()
{
	int i,j;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		cin>>L[i]>>R[i]>>C[i];
		d[L[i]]+=C[i];
		d[R[i]+1]-=C[i];
	}
	for(i=1;i<=n;i++)
	{
		d[i]+=d[i-1];
		cout<<d[i]<<" ";
	}
	cout<<endl;
	return 0;
}
