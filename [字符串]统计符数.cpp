#include<bits/stdc++.h>
int main()
{
	int a,b,c,d,i;
	a=0;
	b=0;
	c=0;
	d=0;
	char s[30];
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=48&&s[i]<=57)	c++;//Êý×Ö
		
		else if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
			a++;
		else if(s[i]==' ')
			b++;
		else
			d++;
	}
	printf("characters=%d\nspaces=%d\nnumbers=%d\nothers=%d\n",a,b,c,d);
	return 0;
}
