#include<iostream>
using namespace std;
int abs(int a,int b)
{
	if(a<b) swap(a,b);D 
	int t=a%b;
	while(t!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<abs(a,b)<<endl<<a*b/abs(a,b);
}
