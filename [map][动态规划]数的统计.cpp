#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int ,int > A;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		A[x]++;
	}
	for(map<int,int>::iterator it=A.begin();it!=A.end();it++)
	cout<<it->first<<" "<<it->second<<endl;
	return 0; 
}
