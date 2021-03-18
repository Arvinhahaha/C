#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;
vector<int>ves;
int a[10]={0,1,2,3,4,5,6,7,8,9}; 
int main()
{
	int res=0;
		do{
			if((a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4])*a[5]==(a[4]*10000+a[3]*1000+a[2]*100+a[1]*10+a[0]))
			{
				res++;
				for(int j=0;j<5;j++)
				{
					ves.push_back(a[j]);
				}
			}
			
		}while(next_permutation(a,a+10));
		set<int>s(ves.begin(),ves.end());
		for(set<int>::iterator it=s.begin();it!=s.end();it++)
		cout<<*it;
	return 0;
}
