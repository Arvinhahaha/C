#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<=200;i++)
		{
			int can=0,j=i;
			while(can<236&&j<=200)
				{
					can+=j;
					j++;
				}
				if(can==236) cout<<i<<"~"<<j-1<<endl;
		}
		return 0;
}
