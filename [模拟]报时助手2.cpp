#include<stdio.h>
#include<string.h>
int main()
{
	char num1[24][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three"};
	char num2[7][20]={"o'clock","ten","twenty","thirty","forty","fifty"}; 
  	int h,m;
  	scanf("%d %d",&h,&m);
  	if(m==0) printf("%s %s",num1[h],num2[0]);
  	else if(m<=20) printf("%s %s",num1[h],num1[m]);
  	else printf("%s %s %s",num1[h],num2[m/10],num1[m%10]);
  	return 0;
 }
