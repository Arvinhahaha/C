#include<iostream>
#include<string>
using namespace std;
int main()
{
	int start,step,i,j;
	string str;
	cin>>str>>start>>step;
	for(i=start;i<(int)str.size();i+=step)
	{
		cout<<str[i];
	}
	return 0;
}
