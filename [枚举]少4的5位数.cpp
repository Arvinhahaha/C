#include<iostream>
using namespace std;
int main()
{
	int total=0; 
	int a,b,c,d,e;
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
				for(d=0;d<=9;d++)
					for(e=0;e<=9;e++)
						{
							if(a!=4&&b!=4&&c!=4&&d!=4&&e!=4)
							total++; 
							
						}
						cout<<total<<endl;
						return 0;
}
