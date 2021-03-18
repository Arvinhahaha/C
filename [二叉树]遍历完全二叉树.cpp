
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e5 + 10;
int a[maxn];
int n,deep = 0;

int main(void) {
    scanf("%d",&n);
    for(int i = 1; i <= n; i ++) {
        scanf("%d",&a[i]);
    }
    long long sum = 0,maxValue = a[1];            // long long 
    deep = 1;
    for(int i = 1; i <= log2(n); i ++) {
        sum = 0;
        for(int j = (1 << i); j <= (1 << (i + 1)) - 1 && j <= n; j ++) {
            sum += a[j];
        }
        if(sum > maxValue) {
            maxValue = sum;
            deep = i + 1;
        }
    }
    cout << deep << endl;
    return 0;
} 
