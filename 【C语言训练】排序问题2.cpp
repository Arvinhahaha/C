#include<iostream>
#include<algorithm> 
bool compare(int a,int b)
{
	return a>b;
}
using namespace std;
#define N 10

int main()
{
	int a[N];
	int i;
	for(i=0;i<N;i++)
	cin>>a[i];
	sort(a,a+10,compare);
	for(i=0;i<N;i++)
	cout<<a[i];
	return 0;
}
