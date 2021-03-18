#include<bits/stdc++.h>
int main()
{
	int n,i,m=0;
	for(n=2;n<=999;n++)
	{m=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			m+=i;
			else
			m+=0;
		}
		if(m==i)
		//continue;
		//else
		{
			printf("%d its factorsa are ",n);
			for(int t=1;t<n;t++)
			{
				
				if(n%t==0)
				printf("%d,",t);
			}
			printf("\n");
		
		}
	
	}
	return 0;
}
