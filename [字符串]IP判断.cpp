#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
bool judge(int N)
{
	if(N>=0&&N<=255)
	return true;
	else return false;
}

int main()
{
	int a,b,c,d,i,j,k;
	char s[100];
	char end[100]={"End of file"};
	while(~(k=scanf("%d.%d.%d.%d",&a,&b,&c,&d)))
	{
		gets(s);
		if(strcmp(s,end)==0) return 0;
		if(k==4&&judge(a)&&judge(b)&&judge(c)&&judge(d))
		cout<<"Y"<<endl;
		else cout<<"N"<<endl;
		fflush(stdin);//Çå³ý»º³åÇø
	}
	
	return 0;
}
