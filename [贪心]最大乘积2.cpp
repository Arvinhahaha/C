#include<iostream>
#include<algorithm>
#define N 60
bool cmp(int x,int y)
{
	return x>y;
}
using namespace std;
int main()
{
	int T,i,j,maxumx=N,value=1,p,q;
	cin>>T; 
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,cmp);
		p=0;
		q=n-1;
		value=1;
		//思路就是每次最小最大的一组取最大值
		while(m>0)
		{
//			value=max(value*(a[p]*a[p+1]),value*(a[q]*a[q-1]));
			if((value*(a[p]*a[p+1])>value*(a[q]*a[q-1]))&&m>=2)
			{
				value*=(a[p]*a[p+1]);
				p+=2;
				m-=2;
			}
			else if(((value*(a[p]*a[p+1])<value*(a[q]*a[q-1]))&&m>=2)){
				value*=(a[q]*a[q-1]);
				q-=2;
				m-=2;
			}
			else {
				value*=a[p++];
				m--;
			}
		}
		cout<<value<<endl;
	}
	return 0;
 } 
