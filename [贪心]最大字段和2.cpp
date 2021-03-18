
#include<stdio.h>

int a[1000006];

int main()

{

    int t,n,i,sum,maxs;



        sum=0,maxs=-100000006;   //让maxs足够小

        scanf("%d",&n);

        for(i=0;i<=n-1;i++)

            scanf("%d",&a[i]);

        for(i=0;i<=n-1;i++)

        {

            sum=sum+a[i];   //sum累加

            if(sum>maxs)   //让maxs始终保存最大的和

                maxs=sum;

            if(sum<0)   //说明a[i]是一个很小的负数，那么累加后最大和中的 几个元素 肯定不包括这一位，让sum赋值为0，从该位置的下一位继续循环

                sum=0;

        }

        printf("%d\n",maxs);


    return 0;

}

