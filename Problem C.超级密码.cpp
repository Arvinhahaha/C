#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,N;
	char str[99];
	scanf("%d",&N);
	unsigned int num[N];
	for(i=0;i<N;i++)
	num[i]=0;
	for(int t=0;t<N;t++)
		{
//			getchar();
			gets(str);
			l=strlen(str);
			for(i=0;i<l;i++)
			{
			if(str[i]>='0'&&str[i]<='9')
				num[t]=num[t]*10+(str[i]-'0');
				}
		}
	for(i=0;i<N;i++)
	printf("%u\n",num[i]*513);
 } 
