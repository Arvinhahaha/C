#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
int D[MAX][MAX];
int n,T; 
int MaxSum(int i,int j)
{
	if(i==n)
	return D[i][j];
	int x=MaxSum(i+1,j);
	int y=MaxSum(i+1,j+1);
	return D[i][j]+max(x,y);
}
int main()
{
	while(cin>>T){
		while(T--){
			cin>>n;	
			for(int i=1;i<=n;i++)
				for(int j=1;j<=i;j++)
					cin>>D[i][j];
				cout<<MaxSum(1,1)<<endl;
		}
		
	} 
	return 0;
}
