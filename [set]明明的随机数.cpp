#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
set<int> num;
bool cmp(int x,int y)
{
	return x<y;
}
int main()
{
	int N,i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n,cmp);
	for(i=0;i<n;i++)
	num.insert(a[i]);
	cout<<num.size()<<endl;
	for(set<int> ::iterator it=num.begin();it!=num.end();it++)
	cout<<*it<<" ";
	return 0;
}

