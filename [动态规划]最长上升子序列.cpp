/*
最坑的一点就是他可以不连续 
*/
#include<iostream>
using namespace std;
int main()
{
	int N,i,j,max=1,sum=0;
	int a[N];
	cin>>N;
	for(int i=0;i<N;i++)
	cin>>a[i];
	for(i=1;i<N;i++)
		{
			int t=i;
			for(int j=i;j<N;j++)
				{
					if(a[j+1]>a[t]) {
						sum++;
						t++;
						if(sum>max) max=sum;
					}
				}
		}
		cout<<max;
		return 0;
}
