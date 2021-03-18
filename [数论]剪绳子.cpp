#include<iostream>
using namespace std;
class solution{
	public:
		int maxproductAftercutting(int length)
		{
			if(length<3) return 1*(length-1);
			 int res=1;
			 if(length%3==1) res*=4,length-=4;
			 if(length%3==2) res*=2,length-=2;
			 while(length) res*=3,length-=3;
			 return res;
		}
}; 
