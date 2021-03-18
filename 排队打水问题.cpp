#include<iostream>
#include<algorithm>
bool cmp(int x,int y)
{
	return x>y;
}
using namespace std;
int main()
{
	int n,r;
	cin>>n>>r;
	int num[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		sum+=num[i];
	}
	sort(num,num+n,cmp);
	for(int i=r;i<n;i++)
	{
		int j=i;
		while(j<n)
		{
			sum+=num[j];
			j+=r;
		}
	}
	cout<<sum<<endl;
	return 0;
}
