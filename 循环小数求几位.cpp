/*
求循环小数 
*/ 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int f(int n,int m)
{
	n=n%m;
	vector<int>v;
	for(;;){
		v.push_back(n);
		n*=10;
		n%=m;
		if(n==0) return 0;
		if(find(v.begin(),v.end(),n)!=v.end())
		return (int)(v.end()-find(v.begin(),v.end(),n));
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<f(n,m)<<endl;
	getchar(); 
}
