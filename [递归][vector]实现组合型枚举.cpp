#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> num;

void dfs(int k)
{
    //���������
    if(num.size() > m || num.size() + (n - k + 1) < m)
        return;
    //����ö�ٱ߽磬������������
    if(k == n + 1)
    {
        for(int i = 0;i < num.size();++i)
            cout << num[i] << " ";

        cout << endl;
        return;
    }

    //ѡ�������
    num.push_back(k);
    dfs(k+1);
    //����
    num.pop_back();

    //��ѡ�������
    dfs(k+1);
}

int main(void)
{
    cin >> n >> m;

    dfs(1);

    return 0;
}

