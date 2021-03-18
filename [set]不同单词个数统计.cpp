#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
set<string>num;
int main()
{
	string s1;
	while(cin>>s1)
	{
		num.insert(s1);
	}
	cout<<num.size();
	return 0;
}
bool same(char s1[],s2[])
{
	int len1,len2;
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1!=len2) return false;
	for(int i=0;i<len1;i++)
	{
		if(s1[i]!=s2[i]) return false;
	}
	return true;
}
