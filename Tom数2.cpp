#include<stdio.h>
#include<string.h>
int main()
{
	int sum,l;
	char s[99];
	while(scanf("%s",s)!=EOF)
	{
		l=strlen(s);
		for(int i=0;i<l;i++)
		{
			sum+=s[i]-'0';
		}
		printf("%d\n",sum);
	}
	return 0;
 } 
