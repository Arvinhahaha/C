#include<iostream>
#include<string> 
#include<map>
#define N 10000
using namespace std; 
int main()
{
	int m,n,p;
	string o;
	cin>>n;
	map<string,int> map1;
	for(int i=0;i<n;i++)
	{
		cin>>o>>p;
		map1[o]=p;
	}
	cin>>m;
	while(m--)
	{
		string t;
		cin>>t;
		cout<<map1[t]<<endl;
	}
}
