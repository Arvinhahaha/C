#include<math.h>
#include<iostream>
using namespace std;
float f(float a,float b,float c,float d,float x)
{
float f;
f=((a*x+b)*x+c)*x+d;
return f;
}

float f1(float a,float b,float c,float x)
{
float f;
f=(x*3*a+2*b)*x+c;
return f;
}

float root(float a,float b,float c,float d)
{
float x0,x1=1;
do
{
x0=x1;
x1=x0-f(a,b,c,d,x0)/f1(a,b,c,x0);
}while(fabs(x1-x0)>=1e-6);
return x0;
}
int main()
{
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<root(a,b,c,d);
}
