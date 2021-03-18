#include<iostream>
#include<cmath>
using namespace std;
int a[9]={1,2,3,4,5,6,7,8,9};
bool used[10]={false};
int ans=0;
bool judge(int a[])
{
	if((fabs(1.0*a[0]/a[1]+1.0*a[2]/a[3]-(1.0*a[0]*10+a[2])/(1.0*a[1]*10+a[3]))<1e-6)&&(a[0]!=a[1])&&(a[2]!=a[3]))
	return true;
	return false;
}
void dfs(int x)
{
	if(x==4){
		if(judge(a)) ans++;
	}
	else for(int i=1;i<10;i++)
	{
//		if(!used[i]) {
			a[x]=i;
//			used[i]=true;
			dfs(x++);
//			used[i]=false;
		}
	}
// }
 int main()
 {
 	dfs(0);
 	cout<<ans;
  } 
