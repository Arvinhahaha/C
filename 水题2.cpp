#include<stdio.h>
#include<string.h>
int main()
{
	char str1[99];
	gets(str1);
	for(int l=strlen(str1)-1;l>=0;l--)
	printf("%c",str1[l]); 
}
