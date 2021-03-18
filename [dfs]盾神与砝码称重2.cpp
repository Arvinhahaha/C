#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int value, datas[233]; bool poi;

void OPT(int num, int sum) {
    if (sum == value) { poi = true; return;  }
    if (num < 0) return;
    OPT(num - 1, sum + datas[num]);
    OPT(num - 1, sum);
    OPT(num - 1, sum - datas[num]);
}

int main() {
    int num, quan;  cin >> num >> quan;
    for (int i = 0; i < num; i++) cin >> datas[i]; 
    while (quan--) {
        poi = false;
        cin >> value;
        OPT(num - 1, 0);
        if (poi) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
