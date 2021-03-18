#include<iostream>
bool used[1005]={false};
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		int t=i,sum=i;
		while(t!=0)
			{
				sum+=t%10;
				t/=10;
			}
			used[sum]=true;
	}
	for(i=1;i<=n;i++)
	{
		if(!used[i]) cout<<i<<endl;
	}
}
