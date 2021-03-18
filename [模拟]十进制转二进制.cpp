#include<stdio.h>
int main()
{
	int N,i=0,j=0;
	//int 范围4个字符 4*8位1非负 
	int a[32];
	scanf("%d",&N);
	j=N;
	while(N)
	{
		a[i]=N%2;	
		N/=2;
		i++; 
	}
		for(i-=1;i>=0;i--)
		printf("%d",a[i]);
	
	if(!j) printf("%d",N);
	return 0;
}
