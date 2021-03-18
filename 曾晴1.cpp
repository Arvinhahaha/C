#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=1;         //第一的工资 
	int a=0;         //天数 
	int i;           //总钱数 
	while(i<108)
	{
		i=i+n;
		n=n+2;
		a++;
	}
	cout<<a; 
	return 0;
}
