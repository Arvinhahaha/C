#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float x,x0,x1;
	cin>>x;
	x1=x/2;
	x0=x;
	while(fabs(x0-x1>1e-6))
	{
		x0=x1;
		x1=(x0+x/x0)/2;	
	}
	cout<<fixed<<setprecision(3)<<x1<<endl;
}
 
