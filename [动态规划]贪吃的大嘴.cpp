#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int m,n,i,j,cnt=0;
	cin>>m>>n;
	int a[n][2];
//	int dp[n];
//	memset(dp,0,sizeof(int)*n);
	for(i=0;i<n;i++)
		{
			cin>>a[i][0]>>a[i][1];
		}
		for(j=0;j<n;j++)
		{
			for(i=1;i<j;i++)
			{
				if(a[i][0]<a[i-1][0])
				{
					int tmp=a[i][0];
					    a[i+1][0]=a[i][0];
					    a[i][0]=tmp;
					    
					    tmp=a[i][1];
					    a[i][1]=a[i+1][1];
					    a[i+1][1]=tmp;
				}
			}
		}
		while(1)     
		{
			for(i=0;i<n;i++)
			{
					if(a[i][1]>0) {
					a[i][1]--;
					cnt++;
					m-=a[i][0];
					i--;
					if(m==0) break;
				}
			}
		}
		cout<<cnt<<endl;
 } 
