#include<iostream>
#include<cmath>
using namespace std;
int ceng(int n)
{
	int x=log2(n+1);
	return x;
}
int main()
{
	int n,sum=0,max=0,t;
	cin>>n;
	int a[n];
	max=a[0];
	t=1;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=1;i<=ceng(n);i++)
	{
		sum=0;
		for(int j=(int)pow(2,i-1);j<(int)pow(2,i);j++)
		{
			sum+=a[j];
		}
		if(sum>max) {
			max=sum; 
			t=i;
		}
	}
	cout<<t<<endl;;
}
