#include <iostream>
#include <algorithm>
#include "string.h"
#define Max 101
using namespace std;
int D[Max][Max];
int num,y,h=0,a[100];
int MaxSum(int num){
    int i, j;
    for(i = num - 1; i >= 1; i --)
        for(j = 1; j <= i; j ++){
            D[i][j] = max(D[i+1][j],D[i+1][j+1]) + D[i][j];//利用动态规划从下往上找最大值 
        }
    return D[1][1];
}
int main()
{
    cin>>y;//控制次数 
    for(int d=0;d<y;d++){
        int i, j;
        cin >> num;
        for(i = 1; i <= num; i ++)
            for(j = 1; j <= i; j ++)
                   cin >> D[i][j];
           a[h++]=MaxSum(num);
    }
    for(int u=0;u<y;u++){
        cout<<a[u]<<endl;
    }
    return 0;
}
