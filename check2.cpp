#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int x=1,y=0,a=0,b=0;
	switch(x)
	{
		case 1:switch(y)
		{
			case 0:a++;break;
			case 1:b++;break;
		}
		case 2:a++;b++;break;
		case 3:a++;b++;break;
	}
	cout<<a<<endl<<b;
 } 
