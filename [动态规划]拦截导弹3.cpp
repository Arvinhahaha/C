#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#define N 300000
using namespace std;
bool cmp(int x,int y)
{
	return x>y;
}

vector<int> a,b,c;
int main()
{
	b.push_back(0);
	int x,i=0,j;
	int sum1=0,sum2=0;
	while(cin>>x)
		a.push_back(x);
	vector<int>::iterator it=a.begin();
	//ÑÏ¸ñµÝÔö 
	while(it!=a.end())
	{
		if(*it<b[b.size()-1]){
			b.push_back(*it);
		}
		else {
			int k=upper_bound(b.begin(),b.end(),*it,cmp)-b.begin();
			b[k]=*it;
		}
		it++;
	}
	cout<<a.size()-b.size()<<b.size()<<endl<<endl;
}
