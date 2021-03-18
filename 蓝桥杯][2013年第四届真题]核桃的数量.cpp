#include<iostream>
using namespace std;
int gcd(int a,int b);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int t=1;
	while(t%a!=0||t%b!=0||t%c!=0)
		{
			t++;
		}
		cout<<t;
}

