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
��C++�������������һ����������ϵͳ���Զ������λ��1�������ᵼ�� nn ��Զ��Ϊ0������ѭ���ˡ�
����취�ǰ� nn ǿ��ת�����޷������ͣ����� nn �Ķ����Ʊ�ʾ���ᷢ���ı䣬��������ʱϵͳ���Զ������λ��0��
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

