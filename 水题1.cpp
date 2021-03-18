#include<stdio.h>
#include<string.h>
int main()
{
	char str[999];
	gets(str);
	int a=0,b=0,c=0,d=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
		a++;
		else if(str[i]>='0'&&str[i]<='9')
		b++;
		else if(str[i]==' ')
		c++;
		else d++;
	 } 
	 printf("%d %d %d %d",a,b,c,d);
}
