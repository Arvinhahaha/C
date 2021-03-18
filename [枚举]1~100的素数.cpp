#include<iostream>
#include<math.h>
using namespace std; 
int is_prime(int N)
{
	if(N==1) return 0; 
	else if(N==2||N==3) return 1;
	else if(N%6!=1&&N%6!=5) return 0;
	for(int i=5;i<floor(sqrt(N));i+=6)
	if(N%i==0||N%(i+2)==0) return 0;
	return 1;
}
int main()
{
	int N=1,count=0;
	while(N<=100)
		{
			if(is_prime(N)==1)
			{
				cout<<N<<" ";
				count++;
			 } 
				N++;
				
		}
		cout<<endl<<count;
		return 0;
}
