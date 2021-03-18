#include<iostream>
#include<math.h>
using namespace std;
	int a,b,c,d;
//#define l = -2147483648
//#define r = 2147483647 
int f(double x){
	return a*x*x*x+b*x*x+c*x+d;
}
double ok(double l,double r){
	double mid=0;
	while(fabs(r-l)>=1e-7){
		mid=(l+r)/2;
		if(f(mid)*f(l)<=0){
			r=mid;
		}
		else{
			l=mid;
		}
	}
	return mid;
}
int main()
{
	int a,b,c,d;
	int count =0;
	cin>>a>>b>>c>>d;
	for(double i=-1000;i<=1000;i+=0.1)
	if(f(i)*f(i+0.1)<=0&&(fabs(i+0.1))!=0) count++;
	cout<<count;
}
