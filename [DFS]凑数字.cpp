/*
9¸öÊı×Ö ´ÕËãÊ½ 
*/ 
#include<iostream>
#include<cmath>
using namespace std;
bool used[10]={false};
int a[9];
int res=0;
bool judge(int a[]){
	if(fabs(a[0]+1.0*a[1]/a[2]+(1.0*a[3]*100+a[4]*10+a[5])/(1.0*a[6]*100+a[7]*10+a[8])-10)<1e-6)
	return true;
	return false;
}
void dfs(int x)
{

	if(x==9) {
		if(judge(a)) res++;
//		return;
	}
	for(int i=1;i<10;i++)
		{
			if(!used[i]) {
				a[x]=i;
				used[i]=true;
				dfs(x+1);
				used[i]=false;
			}
		}
 } 
 int main()
 {
 	dfs(0);
 	printf("%d",res);
 	return 0;
  } 
