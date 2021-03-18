#include<iostream>
#include<cmath> 
using namespace std;
bool iscubic(int N)
{
	double x=pow(N,1/3);
	if(x-(int)x<=1e-6) return true;
	return false;
}
int is_prime(int N)
{
	if(N==1) return 0; 
	else if(N==2||N==3) return 1;
	else if(N%6!=1&&N%6!=5) return 0;
	for(int i=5;i<floor(sqrt(N));i+=6)
	if(N%i==0||N%(i+2)==0) return 0;
	return 1;
}
bool issquare(int N)
{
	double x=pow(N,1/2);
	if(x-(int)x<=1e-6) return true;
	return false;
}

int main()
{
	int a;
	cin>>a;
	cout<<issquare(a);
	return 0;
}






//int main()
//{
//	int a,b,c,d,e,f,g,h,i;
//	for(a=1;i<10;i++)
//	for(b=1;b<10;b++)
//	for(c=1;c<10;c++)
//	for(d=1;d<10;d++)
//	for(e=1;e<10;e++)
//	for(f=1;f<10;f++)
//	for(g=1;g<10;g++)
//	for(h=1;h<10;h++)
//	for(i=1;i<10;i++)
//	 
//}

