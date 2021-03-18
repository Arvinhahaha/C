/*
	*
   ***
  ****** 
*/ 
#include<iostream>
using namespace std;
long long int f(int n)
{
	if(n==1) return 1;
	else if(n==2) return 3;
	else return n+f(n-1); 
 } 
 int main()
 {
    long long int sum=0;
    for(int i=1;i<=100;i++)
    {
    	sum+=f(i);
	}
	cout<<sum;
 }
