#include<bits/stdc++.h>
using namespace std;

struct data        //定义结构体 
{
    int year;
    int month;
    int day;
};
int cmp( data a , data b)    //比较函数 
{
    if( a.year != b.year )
        return a.year < b.year ;
    else if( a.month != b.month )
        return a.month < b.month ;
    else if( a.day != b.day )
        return a.day < b.day ;
}

int main()
{
    int len = 0;
        data n[200];
    while(scanf("%d/%d/%d",&n[len].month , &n[len].day , &n[len].year ) != EOF )
        len++;
    sort(n , n + len , cmp);
    for(int j = 0 ; j < len ; j++)
        printf("%02d/%02d/%d\n",n[j].month , n[j].day , n[j].year );
    return 0;
}

