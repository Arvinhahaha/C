#include<iostream>
using namespace std;
int main()
{
	int res=0;
	int N=99;
	while(N<=99&&N>=10){
		if(N==(((N+27)%10)*10+(N+27)/10))
		res++;
		N--;
	}
	cout<<res; 
 } 
