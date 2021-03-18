#include<iostream>
#include<algorithm>
#define N 100005
using namespace std;
string s;

int main()
{
	int n,i,a=0,b=0;
	cin>>n>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='R') a++;
		else b++;
	}
	
	cout<<min(a,b)<<endl;
	return 0;
}
