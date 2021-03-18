#include<iostream>
using namespace std;
typedef long long ll;
int a[20200328133];
ll F(ll N)
{
	if(N==1||N==2) return 1;
	return (F(N-1)%10+F(N-2)%10)%10;
}

int main()
{
	for(int i=1;i<75;i++)
	
	cout<<i<<" :"<<F(i)<<endl;
}
