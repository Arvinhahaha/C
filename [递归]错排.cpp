#include<iostream>
using namespace std;
typedef long long ll;
//´íÅÅ¹«Ê½ 
ll F(int N)
{
	if(N==1) return 0;
	else if(N==2) return 1;
	else return (N-1)*(F(N-1)+F(N-2));
}
ll F1(int N)
{
	ll i,a=0,c=1,b=1;
	if(N==1) return 0;
	else if(N==2) return 1;
	else{
		for(i=3;i<=N;i++)
	{
		c=(a+b)*(i-1);
		a=b;
		b=c;
	}
		return c;
	}
 }
 int main()
 {
 	int n;
 	cin>>n;
 	cout<<F(n)<<endl<<F1(n)<<endl;
 	return 0;
}
