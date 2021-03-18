#include<iostream>
typedef long long ll;
using namespace std;
ll f(int n,int m)
{
	ll F[m][n];
	if(m==1&&n==1) F[m][n] = 2;
	if(m==1&&n==2) F[m][n] =  3;
	if(m==2&&n==1) F[m][n] = 1;
	if(m==2&&n==3) F[m][n] = 4;
	if(m==3&&n==2) F[m][n] = 6;
	if(m==3&&n==2) F[m][n] = 5;
	F[n][1] =F[n-12]+2*f[n-3,1]+5;
	F(n,2) =f[n-1,1]+3*f[n-3,1]+2*f[n-3,2]+3;
	return f(n,m);
 } 
 int main()
 {
 	int n;
 	cin>>n;
	cout<<f(n,1)<<endl<<f(n,2)<<endl; 
 }
