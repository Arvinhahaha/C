#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int l,i;
	char NumStr[99];
	while(gets(NumStr)!=NULL)
	{
		int sum=0;
		l=strlen(NumStr);
		for(i=0;i<l;i++)
			{
				sum+=NumStr[i]-'0';
			}
			cout<<sum<<endl;
	}
	return 0;
}
