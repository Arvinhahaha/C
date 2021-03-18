#include<iostream>
#include<algorithm>
#include<vector> 
#include<map>
#include<set> 
using namespace std;
map <int,int> mp;
bool lemonadeChange(vector<int>& bills){
	mp[5]=0;
	mp[10]=0;
	mp[20]=0;
	for(int i=0;i<bills.size();i++){
		if(bills[i]==5) {
			mp[5]++;
		}
		else if(bills[i]==10)
		{
			if(mp[5]) {
				mp[5]--;
			}
		else {
			return false;
		}
		mp[10]++;
		}

	else if(bills[i]==20){
		if(mp[10]){
			mp[10]--;
			if(mp[5]){
				mp[5]--;
			}
			else 
				return false;
		}
		else {
			if(mp[5]>=3) mp[5]-=3;
			else return false;
		}
		mp[20]++;
	}	
	}
	return true;
}
int main()
{
//	int b[5]={5,20,5,5,10};
//	vector<int>a(b,b+5);
	vector<int>a;
	int t;
	bool ans;
	while(scanf("%d",&t)!=EOF){
	a.push_back(t);
	ans=lemonadeChange(a);
	}
	printf("%d",ans);
}
