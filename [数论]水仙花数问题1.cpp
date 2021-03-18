#include<iostream>
#include<cmath>
using namespace std;
bool judge(int n)
{
	return fabs(pow(n/100,3)+pow((n/10)%10,3)+(pow(n%10,3))-n)<1e-6;
	}
	int main()
	{
		int n;
		cin>>n;
		cout<<judge(n);
		return 0;
	 } 
