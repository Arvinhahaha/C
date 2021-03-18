#include<stdio.h>
#include<string.h>
#define ll long long
int main()
{
	char str[99];
	while(gets(str))
	{
	int sum=0;
	for(int i=0;i<strlen(str);i++)
	{
		sum+=str[i]-'0';
	}
	printf("%d\n",sum);
	sum=0;
	}
	
	return 0;
}
