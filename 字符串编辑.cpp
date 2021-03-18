#include<stdio.h>
#include<string.h>`
int main()
{
	int word=1;
	int i,j,l;
	char str1[41],str2[5];
	gets(str1);
	gets(str2);
	l=strlen(str1);
	switch(str2[0]){
	case 'I':
			{
		for(i=l-1;i>=0;i--)
			{
				if(str1[i]==str2[2]) 
				{
					for(j=l;j>=i;j--)
					{
					str1[j+1]=str1[j];
					}
				break;
				}
			}
			str1[i]=str2[4];
	if(i>=0)puts(str1);
	else if(i<0) puts("Not exist");
	}break;	
case 'D':
	{
		for(i=0;i<l;i++)
			{
			if(str1[i]==str2[2])
			{
				for(j=i;j<l;j++)
			str1[j]=str1[j+1];
			break;
			 } 
			 } 
		if(i<=l)	puts(str1);
		else if(i>l)puts("Not exist");
	}break;
case 'R':
{
		for(i=0;i<l;i++)
			if(str1[i]==str2[2])
			{	str1[i]=str2[4];
	
				word=0;
			}
		if(word==0)	puts(str1);	
		if(word==1)puts("Not exist");
}break; 

}
}
