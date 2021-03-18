#include<stdio.h>
int main()
{

	int i,j,count=0;
	for(i=0;i<=21000;i++)
		for(j=0;j<=500;j++)
		{
			if(i+j<=20000||i+j>=21000) continue;
			if(2*i+j*100==50000) count++;
		}
		printf("%d",count);
	
}
