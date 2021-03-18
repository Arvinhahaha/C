#include<iostream>
using namespace std;
int main()
{
	long long int n,k,T,i,sum=0,m=1;
	cin>>n>>k>>T;
	int a[n*T+1]={1};
	for(i=0;i<n*T;i++)
		{
			m=m+i;
			m%=k;	
			if(i%n==0) sum+=m;
		}
		
		cout<<sum;
		return 0;
 } 
 
