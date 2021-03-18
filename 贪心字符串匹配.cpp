#include<iostream>
#include<string>
using namespace std;
bool issubsequence(string s,string t)
{
	int k=0;
	for(int i=0;i<s.size()&&k<s.size();i++)
	if(t[i]==s[k]) k++;
	//这就比较清楚贪心的想法了
	//成立便1 
	return k==s.size();
}
int main()
{
	bool t;
	string s,r;
	cin>>s>>r;
	t=issubsequence(s,r);
	cout<<t;
 } 
