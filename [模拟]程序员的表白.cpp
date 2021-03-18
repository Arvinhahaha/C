#include<iostream>
#define N 10005
#include<cstdio>
char map[N][N];
int main()
{
	int m,n,i,j;
	while(scanf("%d",&m)!=EOF)
	{
		n=0;                                                                                     
		int n2=0;
		if(m==0) continue; 
		else n=m+1;
		n2=m+2;
		for(i=0;i<n;i++)
		for(j=0;j<n2;j++)
		map[i][j]=' ';
		for(i=0;i<n2;i++)
		{
			for(j=0;j<n;j++)
			{
				if(((j==0)||(j==n-1)))
				map[i][j]='*';
				if(i==n2-1) map[i][j]='*';
			}
		 }
		 for(i=0;i<n2;i++)
		 {
		 	for(j=0;j<n;j++)
		 	if(map[i][j]!='*')
		 	printf(" ");
		 	else printf("*"); 
			 printf("\n");
		  }
		  printf("\n"); 
	}
	return 0;
}
