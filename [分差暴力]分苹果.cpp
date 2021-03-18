#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	//老师个数 小盆友个数 
	int N,M,i,j;
	cin>>N>>M; 
	int L[M],R[M],C[M],num[N+1];
	memset(num,0,sizeof(num));
	for(int i=0;i<M;i++)
	cin>>L[i]>>R[i]>>C[i];
	for(int i=0;i<M;i++)
	{
		while(L[i]<=R[i])
		{
			num[L[i]++]+=C[i];
		}
	}
	for(int i=1;i<=N;i++)
	cout<<num[i]<<" ";
	cout<<endl;
}
//超时50% 
