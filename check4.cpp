#include<iostream>
using namespace std;
bool check(int N)
{
	while(N>0)
	{
		if(N%10==9) {
			return true;
		}
		N/=10;
			
	}
	return false;
}
int main()
{
	int cnt=0;
	for(int i=1;i<=2019;i++)
	{
		if(check(i)) cnt++;
	}
	cout<<cnt;
}
