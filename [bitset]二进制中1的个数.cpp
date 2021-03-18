#include<iostream>
#include<bitset>
using namespace std;
/*int main()
{
	int n;
	cin>>n;
	bitset<32> u(n);
	cout<<u.count();
}*/
/*
在C++中如果我们右移一个负整数，系统会自动在最高位补1，这样会导致 nn 永远不为0，就死循环了。
解决办法是把 nn 强制转化成无符号整型，这样 nn 的二进制表示不会发生改变，但在右移时系统会自动在最高位补0。
*/
int main()
{
	int n,res=0;
	cin>>n;
	unsigned int un=n;
	while(un)
	res+=un&1,un>>=1;
	cout<<res;
}

