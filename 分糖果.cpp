#include<stdio.h>
int main()
{
	int p[105],n,i,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	while(1)
	{
		int flag=0;
		for(i=0;i<n-1;i++)
		if(p[i]!=p[i+1])
		{
			flag=1;
			break;
		}
		if(flag==0) break;
		for(i=0;i<n;i++) 
		p[i]/=2;
		int t=p[n-1];
		for(i=n-1;i>=0;i--)
		p[i]=p[i]+p[i-1];
		p[0]+=t;
		for(i=0;i<n;i++)
		{
			if(p[i]%2!=0)
			{
				p[i]++;
				cnt++;
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}
