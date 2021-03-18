#include<stdio.h>
int main()
{
	int n,i;
	int a[55];
	a[1]=1;
	a[2]=2;
	a[3]=3;
	a[4]=4;
	while(scanf("%d",&n)!=EOF)
		{
			if(n==0) return 0;
			else {
					for(i=5;i<=n;i++)
						{
							a[i]=a[i-3]+a[i-1];
						}
						printf("%d\n",a[n]);
			}
		
		}
}
