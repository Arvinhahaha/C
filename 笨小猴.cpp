#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h>
int arr[2][26]={0}; 
int Isprime(int n)
{
	if(n==1) return 0;
	if(n==2||n==3)	return 1;
	if(n%6!=1&&n%6!=5)	return 0;
	for(int i=5;i<=floor(sqrt(n));i+=6)
		if(n%i==0||n%(i+2)==0)	return 0;
	return 1;
 } 
int main()
{
	int i,l,j,n;
	int max=0,min=100;
	char str[101];
	while(scanf("%s",str)!=EOF){
		max=0;
		min=100;
	l=strlen(str); 
	for(i=0;i<26;i++)
	arr[0][i]='a'+i-'0';//×ª»»³ÉÊý×Ö 
	for(int k=0;k<l;k++)
		{
			int tmp=str[k]-'0';
			for(j=0;j<26;j++)
				{
					if(tmp==arr[0][j])
					{
						arr[1][j]++;
					}
				}
			}
			for(i=0;i<26;i++)
				{
					if(arr[1][i]>max)
						max=arr[1][i];
					else if(arr[1][i]<min&&arr[1][i]!=0)
						min=arr[1][i];
				}	
			n=max-min;
			if(Isprime(n)==0)
				printf("No Answer\n%d\n",n);
			else printf("Lucky Word\n%d\n",n);	
			for(j=0;j<26;j++)
			arr[1][j]=0;
}

}
