#include<iostream>
#include<string>
#include<set>
using namespace std; 
int main()
{
	string s;
	set<string>s1;
	while(cin>>s){
		s1.insert(s);
	}
	cout<<s.size()<<endl;
	return 0;
}
