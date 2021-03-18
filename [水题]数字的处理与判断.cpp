#include<stdio.h>
#include<string.h>
int main()
{
	char str[6];
	gets(str);
	int l; 
	for(int i=0;i<(l=strlen(str));i++)
	{
		if(i<l-1)
		printf("%c ",str[i]);
		else printf("%c\n",str[i]);
	}
	for(int i=0;i<(l=strlen(str));i++)
	printf("%c",l-i);
	puts("\n");
}
