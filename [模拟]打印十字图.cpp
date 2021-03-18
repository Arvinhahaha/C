#include <stdio.h>
void get(int N,int n,char a[130][130])
{
    int h = (N-n)*2;//h为每层打印初始位置，会根据总层数和现在要打印的层数相结合 
    int l = 5+(n-1)*4;//为每层'$'的个数，注意每层的长宽都相同，上面初始的位置长宽也相同 
    int i;
    for(i=1;i<=l;i++){//第一层及最后一层 
        a[h][h+1+i] = '$';
        a[h+l+3][h+1+i] = '$';
    }
    a[h+1][h+2] = '$',a[h+1][h+l+1] = '$';//打印第二层和倒数第一层 
    a[h+l+2][h+2] = '$',a[h+l+2][h+l+1] = '$';
    for(i=0;i<=2;i++){//打印第三层和倒数最后一层 
        a[h+2][h+i] = '$',a[h+2][h+l+1+i] = '$';
        a[h+l+1][h+i] = '$',a[h+l+1][h+l+1+i] = '$';
    }
    for(i=0;i<l;i++){//最后剩下来的两行 
        a[h+2+i][h] = '$';
        a[h+2+i][h+3+l] = '$';
    } 

    if(n==1){//打印现有第一层中间的十字会 
        for(i=0;i<l;i++){
            a[h+2+i][h+4] = '$';
            a[h+4][h+2+i] = '$';
        }
    }
}

void print(char a[130][130],int N)//打印所有层数 
{
    int i,l,j;
    l = 5+(N-1)*4+4;
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            if(a[i][j]!='$')//最后没赋的赋'.' 
                a[i][j] = '.';
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    int N,i;
    scanf("%d",&N);
    char a[130][130];
    for(i=N;i>=1;i--)
        get(N,i,a);//从最后一层开始生成 
    print(a,N);
    return 0;
}
