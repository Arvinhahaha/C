#include<stdio.h>
int main()
{
	char ch[99];
	gets(ch);
	for(int i=0;i<4;i++)
	{
		if(i!=3) printf("%c ",ch[i]);
		else printf("%c\n",ch[i]);
	}
	return 0;
}
