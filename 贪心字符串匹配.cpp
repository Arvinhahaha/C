#include<iostream>
#include<string>
using namespace std;
bool issubsequence(string s,string t)
{
	int k=0;
	for(int i=0;i<s.size()&&k<s.size();i++)
	if(t[i]==s[k]) k++;
	//��ͱȽ����̰�ĵ��뷨��
	//������1 
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
