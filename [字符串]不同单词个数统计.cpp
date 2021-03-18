#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0,i,l,count=1;
	char str[100];
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==' '||str[i]=='\n')
		{
			flag=1;
		}
		else if(flag==1)
		{
			count++;
			flag=0;
		}
	}
	printf("%d\n",count);
	return 0;
 } 
