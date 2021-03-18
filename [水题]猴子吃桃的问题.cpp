#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	int sum=1;
	cin>>N;
	for(int i=N;i>1;i--)
	{
		sum=2*sum+2;
	}
	cout<<sum<<endl;
 } 
