#include<iostream>
#include<algorithm>
#include<cstring>
#include<iomanip>
using namespace std;
bool compare(int x,int y)
{
	return x>y;
}
int main()
{
	int n,n1,n2,i,j;
	double sum,max,sum1=0,sum2=0;
	cin>>n>>n1>>n2;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n,compare);
	//n1´ó 
	if(n1>n2) swap(n1,n2);
	for(i=0;i<n1;i++) sum1+=a[i];
	for(i=n1;i<n1+n2;i++) sum2+=a[i];
	sum=sum1*1.0/n1+sum2*1.0/n2;
	cout<<fixed<<setprecision(6)<<sum<<endl;
	return 0;
 } 
