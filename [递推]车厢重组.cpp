#include<iostream>
using namespace std;
int main()
{
	int N,i,j,cnt=0;
	cin>>N;
	int a[N];
	for(i=0;i<N;i++)
	cin>>a[i];
	for(i=0;i<N;i++)
	{
		for(j=1;j<N-i;j++)
		if(a[j-1]>a[j]) {
			int tmp=a[j-1];
			a[j-1]=a[j];
			a[j]=tmp;
			cnt++;
		}
	 }
	 cout<<cnt<<endl; 
}
