#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1]={0};
	for(int i=1;i<=n;i++)
	a[i]=i;
	do{
		for(int j=1;j<=n;j++)
		cout<<a[j]<<" ";
		cout<<endl;
	}while(next_permutation(a+1,a+n+1));
	return 0;
}
