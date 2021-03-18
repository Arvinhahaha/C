#include<iostream>
#include<cstring> 
using namespace std;
int switch_2to10(char s[])
{
	int l=strlen(s),flag=1,sum=0;
	for(int i=l-1;i>=0;i--)
	{
		sum+=(s[i]-'0')*flag;
		flag*=2;
	}
	return sum;
}
int main()
{
	char s[100];
	gets(s);
	cout<<switch_2to10(s)<<endl;
	return 0;
}
