#include<stdio.h>

#include<algorithm>
using namespace std;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	int N,M,sum=0;
	scanf("%d%d",&N,&M);
	int num[N];
	for(int i=0;i<N;i++)
	scanf("%d",&num[i]);
	sort(num,num+N,cmp);
	for(int i=M;i<M+;i+=M)
	{
		sum+=num[i];
	}
	printf("%d\n",sum);
	return 0;
 } 
