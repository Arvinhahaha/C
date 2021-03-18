#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,d;
	while(scanf("%d",&d)){
		if(d==0) break;
		if(d>=85) a++;
		else if(d>=60&&d<=84) b++;
		else c++; 
	}
	printf(">=85:%d\n60-84:%d\n<60:%d",a,b,c);
	return 0;
}
