#include<iostream>
using namespace std;
int midsearch(int a[],int n,int b[],int m)
{
	int i,j;
	for(i=0;i<m;i++)
		{
			int flag=0;
			int left=0;
			int right=n-1;
			int mid=(right+left)/2;
			while(left<right)
			{
				if(a[mid]>b[i]){
					right=mid-1;
				}
				if(a[mid]<b[i]){
					left=mid+1;
				}
				mid=(right+left)/2;
				if(a[mid]==b[i]){
					cout<<"Yes"<<endl;
					flag=1;
					break;
					
				} 
			}
			
			if(flag==0) cout<<"No"<<endl;
		}
}
int main()
{
	int n,m,i,j;
	cin>>n;
	int a[n]; 
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	int b[m];
	for(j=0;j<m;j++)
	cin>>b[j];
	midsearch(a,n,b,m); 
	
	
}
