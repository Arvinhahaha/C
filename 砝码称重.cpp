#include<iostream>
#include<stdio.h> 
using namespace std;
int main()
{
	int Total=0;
	int sum=0;
	int a[6],b[6]={0,0,0,0,0,0};
	int w[6]={1,2,3,5,10,20};
	int i,k;
	bool t[1001];
	for(i=1;i<1001;i++)
		t[i]=false;
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	for(b[0]=0;b[0]<=a[0];b[0]++)
		for(b[1]=0;b[1]<=a[1];b[1]++)
			for(b[2]=0;b[2]<=a[2];b[2]++)
				for(b[3]=0;b[3]<=a[3];b[3]++)
						for(b[4]=0;b[4]<=a[4];b[4]++)
							for(b[5]=0;b[5]<=a[5];b[5]++)
								{
								sum=b[0]*w[0]+b[1]*w[1]+b[2]*w[2]+b[3]*w[3]+b[4]*w[4]+b[5]*w[5];
	//							printf("%d",sum);
								if(t[sum]==false)
								{
									t[sum]=true;
									Total++;
										}		
								}
								printf("Total=%d",Total-1);
	
}
