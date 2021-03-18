#include<stdio.h>
#include<string.h>
int main()
{
char str1[99],str2[99],str3[99];
 gets(str1);
 gets(str2);
 gets(str3);
 char tmp[99];
 if(strcmp(str1,str2)>0)
 {
 	strcpy(tmp,str1);
 	strcpy(str1,str2);
 	strcpy(str2,tmp);
 }
 if(strcmp(str1,str3)>0)
 {
 	strcpy(tmp,str1);
 	strcpy(str1,str3);
 	strcpy(str3,tmp);
 }
 if(strcmp(str2,str3)>0)
 {
 	strcpy(tmp,str2);
 	strcpy(str2,str3);
 	strcpy(str3,tmp);
 }
 puts(str1);
 puts(str2);
 puts(str3);
 puts(str3); 
} 
