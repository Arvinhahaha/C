#include<stdio.h>
#include<string.h>
int main()
{
	char str1[99],str2[99];
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	puts(str1); 
 } 
