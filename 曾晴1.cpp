#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=1;         //��һ�Ĺ��� 
	int a=0;         //���� 
	int i;           //��Ǯ�� 
	while(i<108)
	{
		i=i+n;
		n=n+2;
		a++;
	}
	cout<<a; 
	return 0;
}
