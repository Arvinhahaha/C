#include<iostream>
using namespace std;
int judge(int n)
{
	int t;
	while(n)
	{
		t=n%10;
		if(t==2||t==0||t==1||t==9)
		return true;
		n/=10;
	}
	return false;
 } 



int sum(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(judge(i))
		{
			sum+=i;
		}
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	cout<<sum(n);
	return 0;
}
