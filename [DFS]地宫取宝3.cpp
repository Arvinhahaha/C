#include<iostream>
using namespace std;
const int maxn=55,mod=1000000007;
typedef long long ll;
int map[maxn][maxn];
int n,m,k;
int  dfs(int x,int y,int cnt,int max)//��ǰλ�� ӵ�еı�������  �������������ֵ 
{
    if(x==n-1&&y==m-1)//1.���ܲ������½ǵ�Ҳ����.2������½ǵıȵ�ǰ�Ĵ�������һ���������Ҳ��������·�� 
    {
        if(cnt==k||cnt+1==k&&max<map[x][y])return 1;
        else return 0;
    }
    ll ans=0;
    if(y+1<m)//������
    {
        if(max<map[x][y])
        ans+=dfs(x,y+1,cnt+1,map[x][y]);//���������� 
        ans+=dfs(x,y+1,cnt,max);//���Բ��� 
     } 
    if(x+1<n)//������ 
    {
        if(max<map[x][y])
        ans+=dfs(x+1,y,cnt+1,map[x][y]);//ͬ�� 
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
    cout<<dfs(0,0,0,-1)<<endl;//һ��ʼ��������0 ��ֵ-1����Ϊ�еı����ֵ��0�� 

    return 0;
 }
