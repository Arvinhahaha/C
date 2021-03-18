#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll sum1=0,sum=0;
	int a=2;
	int n;
	cin>>n;
	n++;
	while(n--)
		{
			cout<<n<<endl;
			int t=n;
			sum1=0;
			a=2;
			while(t--)
				{
					sum1+=a;
					a*=10;
				}
				sum+=sum1;
		}
		cout<<sum<<endl;
}
