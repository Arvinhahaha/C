#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[999]={0};
	char str[999];
	char str1[5]={'a','e','i','o','u'};
	int l,i,j,t=0,sum=1;
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		for(j=0;j<5;j++)
		{
			if(str[i]==str1[j])
			a[t]=1;
			continue;
		}
		t++;
	}
	int temp=a[0];
	for(i=1;i<l;i++)
	{
//		int temp=a[0];
		if(a[i]!=temp)
		{
			sum++;
			temp=a[i];	
		}
	}
	if(sum==4) cout<<"YES";
	else cout<<"NO";
}
