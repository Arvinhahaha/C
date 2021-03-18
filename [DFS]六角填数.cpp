#include<iostream>
using namespace std;
int b[12]={1,2,3,4,5,6,7,8,9,10,11,12};
int a[12];
bool used[13]={1,1,0,1,0,0,0,0,1,0,0,0,0};

void dfs(int x)
{
	int t1=0,t2=0,t3=0,t4=0,t5=0,t6=0;
	if(x==9) {
		t1=8+a[1]+a[2]+a[3];
		t2=3+a[3]+a[4]+a[7];
		t3=3+a[6]+a[9]+8;
		t4=1+a[1]+a[9]+a[5];
		t5=a[5]+a[6]+a[7]+a[8];
		t6=1+a[2]+a[4]+a[8];
		if(t1==t2&&t2==t3&&t3==t4&&t4==t5&&t5==t6)
		cout<<a[9]; 
	}
	for(int i=0;i<12;i++)
	{
		if(!used[i])
		{
			a[x]=b[i];
			used[i+1]=1;
			dfs(x+1);
			used[i+1]=0;
		}
	}
}
int main()
{
	dfs(0);
}
