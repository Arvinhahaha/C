#include<iostream>
#include<string>
using namespace std;
void Printchar(int N)
{
	if(N==1) cout<<'A';
	else {
		Printchar(N-1);
		cout<<(char)('A'+N-1);
		Printchar(N-1);
	}
}
int main()
{
	int n;
	cin>>n;
	Printchar(n);
	cout<<endl;
}
