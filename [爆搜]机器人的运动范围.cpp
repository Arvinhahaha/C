#include<iostream>
using namespace std;
int main()
{
	int k,m,n,res=0;
	cin>>k>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i%10+i/10+j/10+j%10)<=k) res++;
		}
	 }
	 cout<<res<<endl; 
}
//爆搜时间复杂度n^2
//超时 
