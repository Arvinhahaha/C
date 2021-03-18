/*
6位float不够精准 
*/
#include<iostream>

using namespace std;
int main()
{
	//b/a
	double pi=0,sum=0,a=1,b=1;
	int N=2020;
	int flag=1;
	while(N--){
		sum+=b/a*flag;
		a+=2;
		flag*=-1;
	}
	printf("%f\n",a);
	printf("%.6f",sum*4);
}
