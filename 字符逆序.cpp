#include<stdio.h>
#include<string.h>
int main()
{
	int N,l,i;
	char str[99];
	gets(str);
	l=strlen(str);
	for(i=l-1;i>=0;i--)
		{
			printf("%c",str[i]);
		}
		return 0;
 } 
