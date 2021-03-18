#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x1,x0=0;
	double a;
	cin>>a;
	x0=a/2;
	x1=(x0+a/x0)/2;
	while(fabs(x1-x0)>=1e-5)
	{
		x0=x1;
		x1=(x0+a/x0)/2;
	}
	printf("%0.3f",x0);
 } 
