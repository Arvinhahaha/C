#include<stdio.h>
#include<string.h>
//int qushu(int N)
//{
//	char str[999];
//	int i=0,j,n;
//	unsigned int num=0; 
//	while(N--){
//		gets(str);
//		n=strlen(str);
//		for(i=0;i<n;i++)
//		{
//			if(str[i]>='0'&&str[i]<='9')
//			num=num*10+(str[i]-'0');
//		}
//		printf("%u",num*513);
//	}	num=0;
//	return 0;		
//
// } 
 int main()
 {
 	int N;
 	int j,n;
 	scanf("%d",&N);
 	char str[999];
 	unsigned int num=0; 
 	for(int i=0;i<N;i++)
	 {
	 	num=0;
		gets(str);
		n=strlen(str);
		for(i=0;i<n;i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			num=num*10+(str[i]-'0');
		}
		printf("%u",num*513);
	  } 
	}
