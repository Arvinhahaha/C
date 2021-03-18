#include<iostream>
#include<cmath>
using namespace std;
bool used[10]={false};
int a[10]={0,1,2,3,4,5,6,7,8,9};
int res=0;
bool judge(int a[]){
		if((a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4])*a[5]==(a[4]*10000+a[3]*1000+a[2]*100+a[1]*10+a[0]))
		return true;
		return false;
	}
void dfs(int x)
{
	if(x==6){
		if(judge(a)) {
		res++;
		for(int m=0;m<6;m++)
		cout<<a[m]; 
		}
		return;
		}
	for(int j=0;j<10;j++)
	{
		if(!used[j]) {
			a[x]=j;
			used[j]=true;
			dfs(x+1);
			used[j]=false;
		}
	}
}
int main()
{
	dfs(0);
	cout<<endl<<res<<endl;
}
