#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m,n;
	int total=0;
	cin>>m;
	while(m--)
	{
		bool flag=false;
		total=0;
		cin>>n;
		int a[n][2];
		for(int i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1];
		for(int i=0;i<n;i++)
		{
			if(a[i][0]>=a[i][1])
			total+=a[i][0];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i][0]<a[i][1])
			{
				if(total+a[i][0]<a[i][1])
				{
				flag=true;
				break;
				}
				else total+=a[i][0];
			}
			
		}
		if(flag) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;	
	}
}
