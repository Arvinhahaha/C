#include<iostream>
using namespace std;
void PrintfN(int N,int row)
{
	int first=1;
	for(int i=1;i<=row;i++)
	{
		first+=i-1;
	}
	int tmp=first;
	int inc=row+1;
	for(int i=1;i<=N-row+1;i++)
	{
		if(i<N-row+1)
		cout<<tmp<<" ";
		else
		cout<<tmp;
		tmp+=inc;
		inc++;
	}
	
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		PrintfN(n,i);
		cout<<endl;
	}
	
	return 0; 
}
