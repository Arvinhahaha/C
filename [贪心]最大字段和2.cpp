
#include<stdio.h>

int a[1000006];

int main()

{

    int t,n,i,sum,maxs;



        sum=0,maxs=-100000006;   //��maxs�㹻С

        scanf("%d",&n);

        for(i=0;i<=n-1;i++)

            scanf("%d",&a[i]);

        for(i=0;i<=n-1;i++)

        {

            sum=sum+a[i];   //sum�ۼ�

            if(sum>maxs)   //��maxsʼ�ձ������ĺ�

                maxs=sum;

            if(sum<0)   //˵��a[i]��һ����С�ĸ�������ô�ۼӺ������е� ����Ԫ�� �϶���������һλ����sum��ֵΪ0���Ӹ�λ�õ���һλ����ѭ��

                sum=0;

        }

        printf("%d\n",maxs);


    return 0;

}

