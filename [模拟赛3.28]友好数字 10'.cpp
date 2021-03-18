#include<iostream>
using namespace std;
bool used[42]={false};
int main()
{
	int a[10];
	int cnt=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		used[a[i]%42]=true; 
	}
	for(int i=0;i<42;i++)
	{
		if(used[i]==true) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
