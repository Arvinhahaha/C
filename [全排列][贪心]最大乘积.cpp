#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
	int T,i,j,n,m;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		ll sum=1,max=0;
		do{
			sum=1; 
			for(i=0;i<m;i++)
				sum*=a[i];
			if(sum>max) max=sum;
		}while(next_permutation(a,a+n));
			cout<<sum<<endl;
	}
}
