#include<iostream>
#include<algorithm>
#include<vector>
#define INF 0x3f3f3f3f
typedef long long ll;
const int AX=2e6+66;
using namespace std;
ll a[AX];
ll deq_MAX[AX];
ll deq_MIN[AX];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	 } 
	int h1=1,t1=0;
	int h2=1,t2=0;
	vector<int> v_max;
	vector<int> v_min;
	for(int i=1;i<=n;i++)
	{
		while(h1<=t1&&a[i]>=a[deq_MAX[t1]]) t1--;
		deq_MAX[++t1]=i;
		
	}//Î´Íê´ýÐø 
 } 

