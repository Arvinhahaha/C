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

        if(up<dp_Up[i])  //�������Ǹ�����β���������������
            up=dp_Up[i];
    }

    printf("%d\n",down+1);//Ϊʲô��1�أ���Ϊ �����Ե�8������β���������  ����downֻ�Ǽ�¼����������ж��ٸ�������û�а����ڰ˸����������Ծͼ�1�������Ҳ��
    printf("%d\n",up+1);
    return 0;
}
