/*
1.еепР  error 
*/
#include<iostream>
#include<algorithm>
bool compare(int a,int b)
{
	return a>b;
}
using namespace std;
int main()
{
	int N,i,j=0,t,max=0,sum=0;
	cin>>N;
	int a[N];
	for(i=0;i<N;i++)
	cin>>a[i];
	for(i=0;i<N;i++)
		{
			sum=0;
			j=i;
			while(j<N){
				sum+=a[j];
				if(sum>max) max=sum;
				j++;
			}
		}
		cout<<max<<endl; 
}
