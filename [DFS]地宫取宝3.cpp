#include<iostream>
using namespace std;
const int maxn=55,mod=1000000007;
typedef long long ll;
int map[maxn][maxn];
int n,m,k;
int  dfs(int x,int y,int cnt,int max)//当前位置 拥有的宝物数量  宝物数量的最大值 
{
    if(x==n-1&&y==m-1)//1.可能不算右下角的也正好.2如果右下角的比当前的大，算上这一个如果正好也可以增加路径 
    {
        if(cnt==k||cnt+1==k&&max<map[x][y])return 1;
        else return 0;
    }
    ll ans=0;
    if(y+1<m)//向右走
    {
        if(max<map[x][y])
        ans+=dfs(x,y+1,cnt+1,map[x][y]);//符合拿起它 
        ans+=dfs(x,y+1,cnt,max);//可以不拿 
     } 
    if(x+1<n)//向下走 
    {
        if(max<map[x][y])
        ans+=dfs(x+1,y,cnt+1,map[x][y]);//同上 
        ans+=dfs(x+1,y,cnt,max);
    }
    return ans%mod;
}
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>map[i][j];
    cout<<dfs(0,0,0,-1)<<endl;//一开始宝物数量0 价值-1（因为有的宝物价值有0） 

    return 0;
 }
