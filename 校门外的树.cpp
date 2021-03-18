#include<stdio.h>
int main()
{
	int N,m,i,j,count=0;
	scanf("%d",&N);
	N+=1;
	int a[N]={0};
	scanf("%d",&m);
	int b[m][2];
	for(i=0;i<m;i++)
		for(j=0;j<2;j++)
			{
				scanf("%d",&b[i][j]);
			}
			for(i=0;i<m;i++)
				while(b[i][0]<=b[i][1])
					{
						a[b[i][0]]=1;
						b[i][0]++;
					}
				for(i=0;i<N;i++)
					{
						if(a[i]==0)
							count++;
						}	
		printf("%d",count);
		return 0;
}
