//Ҫ�� 1��������Ǽ�λ�� 
//2���ֱ����ÿһλ����
// 3�������������λ����
#include<stdio.h> 
int main()
{
	int a[5];
	int num,i=0,j,yu,chu,count=0;
	scanf("%d",&num);
	chu=num;
	while(chu!=0)
		{
			yu=chu%10;
			chu/=10;
			a[i]=yu;
			i++;
			count++;
		}
		printf("%d\n",count);
		for(i=count-1;i>=1;i--)
		printf("%d ",a[i]);
		printf("%d\n",a[0]);
			for(i=0;i<count-1;i++)
		printf("%d",a[i]);
		printf("%d\n",a[count-1]);
}
