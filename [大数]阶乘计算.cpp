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
		//�տ�ʼ��λΪ0 
		f=0;
		for(int j=0;j<count;j++)
		{
			temp=A[j]*i+f;//temp��¼ÿһλ������i���Ͻ�λ�� 
			A[j]=temp%10;//A[j]��¼������10����
			f=temp/10;//��¼��λ�� 
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
