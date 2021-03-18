#include<iostream>
#include<math.h>
using namespace std;
void fabsort(int n)
{
int i,j,arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if((fabs(arr[j]))<(fabs(arr[j+1])))
	{
		int tmp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tmp;
	}
}
}
for(i=0;i<n;i++) cout<<arr[i]<<" ";
cout<<endl;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0)
			fabsort(n);
		return 0;
}
