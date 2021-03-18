#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int total=0,remain=0,cur;
	for(int i=1;i<=12;i++)
	{
		cin>>cur;
		if(remain+300<cur)
		{
			total=-i;
			break;
		 }
		 remain+=300-cur;
		 total+=remain/100*120;
		 remain%=100 ;
	}
	if(total>0) total+=remain;
	cout<<total<<endl;
	return 0;
}
