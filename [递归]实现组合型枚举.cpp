#include<iostream>
#include<vector>

using namespace std;

int n,m;

vector <int> num;

void dfs(int k)
{
	if(num.size()>m||num.size()+(n-k+1)<m)
	return;
	if(k==n+1)
	{
		for(int i=0;i<num.size();++i)
		cout<<num[i]<<" ";
		cout<<endl;
	}
	num.push_back(k);
	dfs(k+1);
	//»ØËÝ
	num.pop_back() ;
	dfs(k+1); 
}

int main()
{
	cin>>n>>m;
	dfs(1);
	return 0;
}

