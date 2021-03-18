#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	int n;
	cin>>n;
	int num[n][5];
	for(int i=0;i<n;i++)
	{
		num[i][0]=i;
		cin>>num[i][1]>>num[i][2]>>num[i][3];
		num[i][4]=num[i][1]+num[i][2]+num[i][3];
	}
	sort(num[i][4],num[i][4]+n,cmp);
	for(int i=0;i<5;i++)
	cout<<i<<" "<<num[i][4]<<endl;
	return 0;
}
