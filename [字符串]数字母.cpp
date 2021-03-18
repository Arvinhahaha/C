#include<stdio.h>
#include<string.h>
bool judge(char ch)
{
	return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}
int main()
{
	int cnt=0;
	char ch;
	while((ch=getchar())!='\n')
	{
		if(judge(ch))
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}
