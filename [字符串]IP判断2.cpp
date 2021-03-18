#include<stdio.h>
#include<string.h>
int translate(char str[])
{
	int l,sum=0,tem;
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		tem=str[i]-'0';
		sum+=str[i];
		sum*=10;
	}
	return sum;
}
bool judge(int n)
{
	if(n>=0&&n<=255)
	return true;
	return false;
}
int main()
{
	char a[100],b[100],c[100],d[100];
	while(scanf("%s%s%s%s",a,b,c,d)!=EOF)
	{
		if(judge(translate(a))&&judge(translate(b))&&judge(translate(c))&&judge(translate(d)))
		printf("Y");
		else printf("N");
	}
	return 0;
}
