#include<iostream>
using namespace std;
int check(int a[],int n)
{ 
	int i;
	int tmp,count=0;
	while(1){
	for(i=0;i<n;i++)
	if(a[0]!=a[i]) break;
	if(i==n) break;
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			a[i]++;
			count++;
		}
		a[i]/=2;}
		tmp=a[n-1];
		for(i=n-1;i>0;i--)
		a[i]+=a[i-1];
		a[0]+=tmp;
}
cout<<count<<endl;
return 0;
} 
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	check(a,n);
	return 0;
}
