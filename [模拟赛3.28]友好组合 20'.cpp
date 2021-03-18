#include<iostream>
#include<algorithm>
#include<cstring>
#include<bitset>
using namespace std;
int a[32];
int N,M,K;
bool check(int m,int n)
{
	bitset<32>u(m);
	bitset<32>v(n);
	int cnt=0;
	for(int i=0;i<32;i++)
	{
		if(u[i]!=v[i])
		cnt++;
	}
	if(cnt>=K) return true;
	return false; 
}
int main()
{
	int t=1,o=0;
	cin>>N>>M>>K;
	int b[M];
	memset(b,0,sizeof(b));
	for(int i=1;i<N-1&&t<M;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(!check(b[j],i))
			{
				i++;
			}
			else
			{
				b[t]=i;
				t++;
			}
		}
	}
	for(int i=0;i<M;i++)
	cout<<b[i]<<" ";
	return 0;
}
