#include<stdio.h>
#define N 10000
int main(){
    int A[N]={0},dp_Down[N]={0},dp_Up[N]={0},n;
    int i,j;
    int up=0,down=0;
    i=1;
    while(~scanf("%d",&A[i]))
        i++;
    n=i-1;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){

            if(A[j]>A[i]){

                if(dp_Down[i]<dp_Down[j]+1)
                    dp_Down[i]=dp_Down[j]+1;
            }


            if(A[j]<=A[i]){
                if(dp_Up[i]<dp_Up[j]+1)
                    dp_Up[i]=dp_Up[j]+1;
            }

        }

        if(down<dp_Down[i])
            down=dp_Down[i];

        if(up<dp_Up[i])  //看看以那个数结尾的上升的子序列最长
            up=dp_Up[i];
    }

    printf("%d\n",down+1);//为什么加1呢，因为 比如以第8个数结尾的子序列最长  但是down只是记录比它大的数有多少个，但是没有包括第八个数本身，所以就加1，下面的也是
    printf("%d\n",up+1);
    return 0;
}
