#include<iostream>
#include<algorithm>
#include <iomanip> 
#define N 10005
using namespace std; 
int main()
{
	int i,j,n,max;
	float w[N]={0},p[N]={0},q[N]={0},sum=0,free=0,t;
	cin>>n>>max;
	for(i=1;i<=n;i++){
		cin>>w[i]>>p[i];
		q[i]=p[i]/w[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(q[i]<q[j])
			{
				t=q[i];
				q[i]=q[j];
				q[j]=t;
				
				t=w[i];
				w[i]=w[j];
				w[j]=t;
				
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	for(i=n;i>=1;i--)
	{
		if(free+w[i]<max)
		{
			free+=w[i];
			sum+=p[i];
		}
		else {
			sum+=(max-free)*q[i];
				break;
		}
	
	}
	cout<<fixed<<setprecision(1)<<sum<<endl;
}
