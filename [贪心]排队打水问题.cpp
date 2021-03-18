#include<iostream>
#include<string>
#include<algorithm>
bool compare(int a,int b)
{
	return a>b;
}
using namespace std;
int main()
{
	int n,place,i=0,j,time=0;
	cin>>n>>place;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n,compare);
	for(i=0;i<n;i++)
	{
		j=i;
		while(j<n)
		{
			time+=a[j];
			j+=place;		
		}
	}
	cout<<time<<endl;
}
