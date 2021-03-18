#include<iostream>
#include<string>
using namespace std;
struct ST{
	string name;
	string num;
	char sex;
}a[1009];
void f(string str1,string str2,int n)
{
	char s1,s2;
	for(int i=0;i<n;i++)
	{
		if(a[i].name==str1||a[i].num==str1)
		s1=a[i].sex;
		else if(a[i].name==str2||a[i].num==str2)
		s2=a[i].sex;
	}
	if(s1!=s2)
	cout<<"Y"<<endl;
	else cout<<"N"<<endl;
 } 
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i].name>>a[i].num>>a[i].sex;
	cin>>m;
	string str1,str2;
	for(int i=0;i<m;i++)
	{
		cin>>str1>>str2;
		f(str1,str2,n);
	}
	return 0;
}
