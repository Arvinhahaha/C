#include<stdio.h>
#include<string.h>
int main()
{
	int N,i,count1=0,count2=0,ess,max=0;
	char name1[20],name[20],ganbu,xibu,ch;
	int qimo,banji;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s%d%d",name,&qimo,&banji);
		scanf("%c%c%c%c%d",&ch,&ganbu,&ch,&xibu,&ess);
		if(qimo>80&&ess>=1) count1+=8000;
		if(qimo>85&&banji>80) count1+=4000;
		if(qimo>90) count1+=2000;
		if(qimo>85&&xibu=='Y') count1+=1000;
		if(ganbu=='Y'&&banji>80)count1+=850;
		count2+=count1;
		if(count1>max)
		{
			max=count1;
			strcpy(name1,name);
		 } 
		count1=0;
	}
	printf("%s\n%d\n%d",name1,max,count2);
}
