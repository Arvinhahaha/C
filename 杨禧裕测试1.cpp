#include<bits/stdc++.h>
int main()
{
	int a,flag;
	int prime(int y);
	scanf("%d",&a);
	flag=prime(a);
	if(flag==1)
	printf("Prime!");
	else
	printf("No Prime!");
	return 0; 
 } 
int prime(int y)
{
 	int m,s=2,n; 
    for(m=2;m<y;m++) 
    {
        if(y%m!=0) 
            s=s+1; 
        if(y%m!=0) 
            s=s; 
    } 
	if(s>=y) n=1; 
	if(s<y) n=0;
	return(n);
}

