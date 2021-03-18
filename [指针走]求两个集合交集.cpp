#include<iostream>
#include<algorithm>
int cmp(int a,int b)
{
	return a<b;
}
using namespace std;
int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	int c[m*n];
	int a1[n],a2[m];
	for(i=0;i<n;i++)
	cin>>a1[i];
	for(i=0;i<m;i++)
	cin>>a2[i];
	sort(a1,a1+n,cmp);
	sort(a2,a2+m,cmp);
	for(i=0,j=0,k=0;i<n&&j<m;){
		if(a1[i]==a2[j]){
			c[k++]=a1[i];
			i++;
			j++;
		}
		else a1[i]>a2[j]?j++:i++;
	}
	if(k) cout<<c[0];
	for(i=1;i<k;i++)
	cout<<' '<<c[i];
	return 0;
}
