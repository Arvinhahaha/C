#include<iostream>
using namespace std;
int main()
{
	int n,x,i,j,m,count=0;
	cin>>n>>x;
	for(i=1;i<=n;i++)
		{
			int m=i;
			while(m>0)
			{
				if(m%10==x)
				{
					count++;
				}
				m/=10;	
			}
		}
		cout<<count;
}
