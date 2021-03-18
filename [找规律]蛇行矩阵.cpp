#include<iostream>
using namespace std;
void printGraph(int N,int rows)
{
	int first=1;
	int i;
	for(i=1;i<=rows;i++)
	first+=i-1;
	int tmp=first;
	int inc=rows+1;
	for(i=1;i<=N-rows+1;i++)
	{
		if(i<(N-rows+1))
		cout<<tmp<<" ";
		else cout<<tmp;
		tmp+=inc;
		inc++;
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		printGraph(n,i);
		cout<<endl;
	}
	
	return 0;
}
