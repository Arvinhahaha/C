#include<iostream>
using namespace std;
typedef long long ll;
ll cnt=0;
ll F(int n)
{
	if(n==0||n==1) return 1;
	else if(n==3) return 2;
	else return F(n-1) + F(n-3);
}
int main()
{
	int n; 
	cin>>n;
	cnt=F(n);
	cout<<cnt<<endl;
	return 0;
}

