#include<stdio.h>
int main()
{
	int n,i,j,max=-9999999;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				if(max<a[i][j]) max=a[i][j];
			 } 
		}
		printf("%d",max);
		
}
