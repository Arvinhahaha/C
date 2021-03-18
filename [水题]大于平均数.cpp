#include<stdio.h>
int main()
{
	int a[10],i,j=0,sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	double t;
	t=sum/10;
	for(i=0;i<10;i++)
	{
		if(t<a[i]) j++;
	}
	printf("%d",j); 
}
