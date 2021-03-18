#include<iostream>
using namespace std;
#define N 10
void swap(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void selectsort(int a[],int n)
{
	int min,i,j;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]) 
				min=j;
		}
		if(min!=i)swap(&a[min],&a[i]);
	} 
}
int main()
{
	int a[N];
	for(int i=0;i<N;i++)
		{
			cin>>a[i];
		}
		selectsort(a,N);
		for(int i=0;i<N;i++)
			cout<<a[i]<<endl;
			return 0;
}
