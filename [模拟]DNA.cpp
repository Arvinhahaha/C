#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int n,a,b,i,j,k;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		for(i=0;i<a;i++)
		{
			if(i==0||i==a-1)
			cout<<"X";
			else cout<<" ";
		}
		cout<<endl;	
	for(k=0;k<b;k++)
	{
		for(i=1;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				if(i==j||i+j==a-1)
				cout<<"X";
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	cout<<endl;
	}
	return 0;  
 }
