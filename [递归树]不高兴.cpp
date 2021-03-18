#include<iostream>
using namespace std;
int bubblesort(int a[],int n)
{
	int temp,weight=1,value=0;
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i;j++)
				{weight=1;
					if(a[j]>a[j+1])
						{
							value+=weight;
							weight++;				
						}
				}
		}
		return value;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	 } 
	cout<<bubblesort(a,n)<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<' ';
//	 } 
}
