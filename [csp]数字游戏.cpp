#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
	int cnt=0;
	string s1;
	cin>>s1;
	for(int i=0;i!=s1.size();i++)
	{
		if(s1[i]==1) 
		cnt++;
	 }
	 cout<<cnt; 
}
