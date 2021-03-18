#include<stdio.h>
#include<cstring>

void check(int N)
{
	int a[7],i,t=0;
	for(i=10000;i<1000000;i++)
		{
			int sum=0;
			if(i<100000) {
				while(i!=0){
					a[t]=i%10;
					i/=10; 
					t++;
				}
				for(int j=0;j<5;j++)
					{
						sum+=a[j];
					}
				if(sum==N&&a[0]==a[4]&&a[1]==a[3])
				printf("%d",i);
			}
		}
 } 
 int main()
 {
 	int N;
 	scanf("%d",&N);
 	check(N);
 }
