#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<set>
using namespace std;
set<string> str;
int main()
{
	int n;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		strlwr(s);
		str.insert(s);
	}
	for(set<string>::iterator it=str.begin();it!=str.end();it++)
	cout<<*it<<endl;
	return 0;
}
