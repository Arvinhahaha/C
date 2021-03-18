#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	int i,j,len,cnt=0,start=0;
	cin>>str1>>str2; 
	len=str1.size();
	for(i=0;i<len;i++)
	{
		if(str1[i]!=str2[i])
		{
			if(start){
			cnt+=(i-start);
			start=0;
		}
		else {
			start=i;
		}
		}
		
	}
	cout<<cnt<<endl;
}
