#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[9]={1,2,3,4,5,6,7,8,9};
int main()
{
	int ans=0;
	do{
		if(((a[0]+1.0*a[1]/a[2]+(1.0*a[3]*100+a[4]*10+a[5])/(1.0*a[6]*100+a[7]*10+a[8]))==10.0))
		ans++;
	}while(next_permutation(a,a+9));
	cout<<ans<<endl;
	return 0;
}
/*
     B      DEF
A + --- + ------- = 10
     C      GHI

*/
