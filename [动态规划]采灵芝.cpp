#include<iostream>
#include<cmath>
#include<algorithm> 
using namespace std;
const int N =1e3+9; 
const int inf=100000000;
int f[N][N]={0};
int main()
{
	int n,sum=0;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+1;j++)
			cin>>a[i][j];
		}
		int ma=-inf;
		for(int i=0;i<n;i++)
			{
				for(int j=0;j<i+1;j++)
					{
						if(i==0&&j==0) continue;
						else{
						f[i][j]+=a[i][j]+max(f[i-1][j-1],f[i-1][j]);
						} 
						if(i==n-1)
						 ma=max(f[i][j],ma);
					}
					if(ma==-inf){
						ma=0;
					}
			}
				cout<<ma<<endl;
			return 0;
}
