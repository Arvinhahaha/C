#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define N 3000
using namespace std;
int dp_down[N]={0};
int dp_up[N]={0};
int max_arr=0;
int min_arr=N;
int sum1=0;
int sum2=0;
vector<int>c;
void dp(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			sum2=0;
			sum1++;
			if(sum1>max_arr) max_arr=sum1; 
		}
		else {
			sum1=0;
			sum2++;
			if(sum2<=min_arr) min_arr=sum2; 
		} 
	}
	cout<<max_arr+1<<endl<<min_arr+1<<endl;
}
int main()
{
	int x,i=0,a[N];
	while(~scanf("%d",&x))
	{
		a[i]=x;
		i++;
	}
	int n=i;
	dp(a,n);
	return 0;
}
