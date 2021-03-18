#include<iostream>
using namespace std;
int Num(int N)
{
	int flag=0;
	int a[6];
	for(int i=10000;i<=999999;i++)
	{
		int sum=0;
		int t=i,j=0;
		while(t){
			sum+=t%10;
			a[j]=t%10;
			t/=10;
			j++;
		}
		if(i<100000&&sum==N&&a[0]==a[4]&&a[1]==a[3]){
				printf("%d\n",i);
				flag=1;
		}
		
		if(i>=100000&&sum==N&&a[0]==a[5]&&a[1]==a[4]&&a[2]==a[3])
		{
			printf("%d\n",i);
			flag=1;
		}
		
	}
		if(flag==0) cout<<"-1";
}
int main()
{
	int n;
	cin>>n;
	Num(n); 
}
