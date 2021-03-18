#include<stdio.h>
int main()
{
	int x=0,y=0;
	int flag=1,flag1=-1;
	for(int i=1;i<=2020;i++)
		{
			
			if(!(i%2)) {
				x+=i*flag;
				flag*=-1;
			}
			else {
 			y+=i*flag1;
			 flag*=-1; 
		}}
		printf("x=%d,y=%d",x,y);
 } 
