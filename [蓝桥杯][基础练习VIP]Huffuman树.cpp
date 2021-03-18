#include<iostream>
#include<algorithm>

bool compare(int a,int b)
{
	return a>b;
 } 
 
using namespace std;
int main()
{
	int length;
	cin>>length;
	int a[length];
	for(int i=0;i<length;i++)
	{
		cin>>a[i];
	}
	int n=length-1,b[n],sum=0;
	for(int j=0;j<n;j++){
		sort(a,a+length,compare);
		b[j]=a[length-1]+a[length-2];
		sum+=b[j];
		length--;
		a[length-1]=b[j]; 
	}
	cout<<sum;
}
