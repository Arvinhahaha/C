#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c,max1=0;
	cin>>a>>b>>c;
	if(a<b) swap(a,b);
	if(a<c) swap(a,c);
	cout<<c<<endl;
}

