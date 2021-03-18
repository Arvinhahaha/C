#include<iostream>
using namespace std; 
int weishu(int n)
{
	int nn,res=0;
	nn=n;
	while(nn>0)
	{
		nn/=10;
		res++;
	}
	return res;
}
int converse(int n)
{
	int i,j,k,ans=0;
	int nn=n;
	for(i=0;i<weishu(nn);i++)
	{
		ans=ans*10+n%10;
		n/=10;
	}
	return ans;
}
int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int sum=converse(m)+converse(n);
	cout<<(converse(sum))<<endl;
	return 0;
}
