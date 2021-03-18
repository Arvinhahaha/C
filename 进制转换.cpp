#include<iostream>

using namespace std;

void switch_1(int N)
{
	while(N!=0)
		{
			cout<<N%8;
			N/=8;
		}
}

int main()
{
	int N;
	cin>>N;
switch_1(N);
}
