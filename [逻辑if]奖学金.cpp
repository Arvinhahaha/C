//19/02/20 19:48
#include<iostream>
#include<algorithm>
#include<iomanip>
struct score{
	int num;
	float chinese;
	float math;
	float english; 
	float sum;
};
bool compare(score x,score y)
{
	if(x.sum>y.sum) return true;
	else if(x.sum==y.sum )
	{
		 if(x.num<y.num) return true;
	}
}
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	score grade[n];
	for(i=0;i<n;i++)
	{
		cin>>grade[i].chinese>>grade[i].math>>grade[i].english;
		grade[i].sum=grade[i].chinese+grade[i].math+grade[i].english;
		grade[i].num =i+1;
	}
	sort(grade,grade+n,compare);
	for(i=n-1,j=0;i>0,j!=5;i--,j++)
	{
		cout<<fixed<<setprecision(0)<<grade[i].num<<" "<<grade[i].sum<<endl;
	}
	
	
}
