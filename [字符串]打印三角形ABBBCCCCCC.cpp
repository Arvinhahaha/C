#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,s;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		for(s=1;s<=(2*(n-i+1)-1)/2;s++)
		printf(" ");
		for(j=0;j<(2*i-1);j++)
		printf("%c",'A'+i-1);
		printf("\n");
	}
	return 0;
 } 
