#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool isPrime(int N)
{
	if(N==0||N==1) return false;
	if(N==2||N==3) return true;
	if(N%6!=1&&N%6!=5) return false;
	for(int i=5;i<=floor(sqrt(N));i+=6)
	if(N%i==0||N%(i+2)==0) return false;
	return true;
}
bool check(int N)
{
	bool flag=true;
	while(N)
	{
		if(!isPrime(N))
		{
			flag=false;
			break;
		}
		N/=10;
	 } 
 }
 int main()
 {
 	int n;
 	cin>>n;
 	for(int i=pow(10,n-1);i<pow(10,n);i++)
 	if(!check(i)) cout<<i<<endl;
  } 
