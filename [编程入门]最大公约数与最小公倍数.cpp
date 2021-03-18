#include<stdio.h>
int main()
{
	int bei(int m,int n);
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d %d",bei(m,n),m*n/bei(m,n));
	
 } 
int bei(int m,int n)
{
	int t;
	m=m<n?m:n;
	t=n%m;
	while(t!=0)
		{
			n=m;
			m=t;
			t=n%m;
		}
		return m;
}
