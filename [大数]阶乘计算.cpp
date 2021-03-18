#include<stdio.h>
#include<string.h>
int main()
{
	int A[10010];
	A[0]=1; 
	int n,i,count=1,f,temp,j;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		//刚开始进位为0 
		f=0;
		for(int j=0;j<count;j++)
		{
			temp=A[j]*i+f;//temp记录每一位数乘以i加上进位的 
			A[j]=temp%10;//A[j]记录不超过10的数
			f=temp/10;//记录进位数 
		}
		
		while(f)
		{
			A[count]=f%10;
			f/=10;
			count++;
		 } 
	}
	for(int i=count-1;i>=0;i--)
	{
		printf("%d",A[i]);
		
	}
	return 0;
 } 
