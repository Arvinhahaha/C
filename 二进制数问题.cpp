#include<iostream>
using namespace std;
#define N 1000
int main()
{
	int i,m,A=0,B=0,countA=0,countB=0;
	for(i=1;i<=N;i++)
	{
		A=0;
		B=0;
		m=i;
		while(m>0)
			{
				if(m%2==0)
					{
						B++;
						
					}
					else A++;
					m/=2;
				if(A>B) countA++;
				else countB++;
					}		
	
	}
	cout<<countA<<" "<<countB<<endl;
 } 
