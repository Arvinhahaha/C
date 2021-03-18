#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
vector<int> close[14];
int get(char c)
{
	if(c=='A') return 1;
	else if(c>='2'&&c<='9') return c-'0';
	else if(c=='0') return 10;
	else if(c=='J') return 11;
	else if(c=='Q') return 12;
	else return 13;
}
int main()
{
	int open[14],t,res=0;
	memset(open,0,sizeof(open));
	char s[2];
	for(int i=1;i<=13;i++)
	{
		for(int j=1;j<=4;j++)
		{
		cin>>s;
		close[i].push_back(get(*s));
		}
	 }
	 for(int i=1;i<=4;i++)
	 {
	 	t=close[13][i];
	 	while(t!=13)
	 	{
	 		open[t]++;
	 		int r=close[t].back();
	 		close[t].pop_back();
	 		t=r;
		 }
	  }
	  for(int i=1;i<=13;i++)
	  {
	  	 res+=open[i]>=4;
	   } 
	   cout<<res<<endl;
	   return 0;
}
 
