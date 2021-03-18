#include<iostream>
#include<algorithm> 
bool compare(int a,int b)
{
	return a<b;
}

using namespace std;


int sum(int a[],int n,int m)
{
	long long sum1=0,t,wt[n-m];
	sort(a,a+n,compare);
	for(int i=m+1;i<=n;i++)
		{
			wt[i]+=wt[i-1]+a[i];
			sum1+=wt[i];
		}
		return sum1;
 } 
 int main()
 {
 	int n,m;
 	cin>>n>>m;
 	int a[n];
 	for(int i=0;i<n;i++)
 	cin>>a[i];
 	cout<<(sum(a,n,m));
 	
 }
