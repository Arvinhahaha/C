#include<stdio.h>
int main()
{
	int N,M,s,j=0;
	int num;
	scanf("%d%d",&N,&M);
	for(int i=2;i<=N;i++)
	{
		s=(s+M)%N;
		printf("%d ",s);
		j++;
		if(j==N/2) printf("%d ",N);
	}
	return 0;
	
}

