#include<stdio.h>
void print_1(int a,int b)
{
	while(b--){
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=a;j++)
				{
					if(i+j==a+1||i==j){
						printf("x");
					}
					else{
						printf(" ");
					}
					printf("\n");
				}
		}
	}
	for(int i=0;i<a;i++)
		{
			if(i==0||i==a-1)
			printf("x");
			else printf(" ");
		}
		printf("\n");
}
int main()
{
	int N,a,b;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%d",&a,&b);
		print_1(a,b);
	}
}
