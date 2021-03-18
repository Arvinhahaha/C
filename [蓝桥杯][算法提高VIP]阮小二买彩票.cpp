#include<iostream>
#include<algorithm>
#include<string.h>
#include<set>
using namespace std;
int main()
{
	string s;
	cin>>s;
	set<string>ans;
	sort(s.begin(),s.end());
	do{
		ans.insert(s);
	}while(next_permutation(s.begin(),s.end()));
	for(set<string>::iterator it=ans.begin();it!=ans.end();it++)
		{
			cout<<*it<<endl;
		}
	 return 0;
 } 
