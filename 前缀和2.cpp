#include<iostream>
using namespace std;
const int N=1e5+9;
int n,m,a[N],c[N],b[N][2],f[N],sum[N];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		//²î·Ö 
		c[i]=a[i]-a[i-1];
		f[i]=f[i-1]+c[i];
		sum[i]=sum[i-1]+f[i];
	}
	
	for(int i=0;i<m;i++)
	cin>>b[i][0]>>b[i][1];
	for(int i=0;i<m;i++)
	{
		cout<<sum[b[i][1]]-sum[b[i][0]-1]<<endl;
	}
	return 0;
}
//µÝÍÆ µÝ¹é ¡£¡£¡£ 
