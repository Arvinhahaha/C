#include<iostream>
#include<algorithm>
bool cmp(int x,int y)
{
	return x>y;
}
using namespace std;
int main()
{
	int n,T,i,j,res=0,sum=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>T;
//	sort(a,a+n,cmp);

	for(i=0;i<n;i++)
		{
			sum=0;
			for(j=i;j<n;j++)
				{
				sum+=a[j];
				if(sum==T)
				{
					for(int k=i;k<=j;k++)
					{
						if(k<j) cout<<a[k]<<" ";
						else cout<<a[k]<<endl;
					}
					res++;
					continue; 
				}
				}
		}
		cout<<res<<endl;
 } 
