#include<iostream>
#include<iomanip>
#include<algorithm>
#define N 200000
using namespace std;
int main()
{
	int a[N]={0};
	int m,n,m_max=0;
	cin>>m>>n;
	a[0]=1;
	int i=max(n,m);
	a[n]=a[m]=1;
	for(;i<N;i++)
	{
		if(a[i-n]||a[i-m])
			a[i]=1;
		else
			m_max=i; 
	}
	cout<<m_max<<endl;
	return 0;
}
