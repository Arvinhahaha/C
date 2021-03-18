#include<iostream>
using namespace std;
int main()
{
	int a1,n;
	for(a1=1;a1<200;a1++)
		{
			for(n=1;n<200;n++)
				{
					if(n*a1+1/2*n*n-n/2==236) cout<<a1<<"~"<<a1+n<<endl;
				}
		}
		return 0;
 } 
