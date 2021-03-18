#include<iostream>
using namespace std;
int main()
{
	int a;
	char ch;
	while(scanf("%d",&a)!=EOF)
		{
			if(a>=90&&a<=100) {
			ch='A';	printf("%c",ch);}
			else if(a>=75&&a<=89) {
			ch='B';	printf("%c",ch);}
			else if(a>=60&&a<=74){
			 ch='C';	printf("%c",ch);}
			else if(a>=0&&a<=59) {
			ch='D';	printf("%c",ch);}
			else printf("Error\n");
		
		}
}
