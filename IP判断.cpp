#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
bool judge(int a)
{
	return a>=0&&a<=255;
}

char end[99]={"End of file"};
int main()
{
	int a,b,c,d;
	int k;
	char s[99];
	while(~(k=scanf("%d.%d.%d.%d",&a,&b,&c,&d)))
	{
		gets(s);
		if(strcmp(s,end)==0) return 0;
		if(k==4&&judge(a)&&judge(b)&&judge(c)&&judge(d))
		printf("Y\n");
		else printf("N\n");
		fflush(stdin);
	}
	return 0;
}
