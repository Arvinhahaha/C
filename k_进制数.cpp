#include<iostream>
using namespace std;
int main()
{
	int N,k,i,res_0,res_1;
	while(scanf("%d%d",&N,&k)!=EOF)
	{
		res_1=k-1,res_0=1;
		for(i=2;i<=N;i++)
		{
			int last_res_1=res_1;
			res_1=(k-1)*(res_1+res_0);
			res_0=last_res_1;
		}
		printf("%d\n",res_1);
	}	
	return 0;
 } 
