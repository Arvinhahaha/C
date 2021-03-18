#include<cstdio>
#include<cstring>

using namespace std; 

int main()
{
	int a1,a2,a3,a4,a5;
	int t;
	for(a1=1;a1<10;a1++)
		for(a2=0;a2<10;a2++)
			for(a3=0;a3<10;a3++)
				for(a4=0;a4<10;a4++)
					for(a5=0;a5<10;a5++)
						{
							if((a5*10000+a5*1000+a5*100+a5*10+a5*1)==(a1*10000+a2*1000+a3*100+a4*10+a5*1)*a1)
							printf("%d%d%d%d%d\n",a1,a2,a3,a4,a5);
						}
	
 } 
