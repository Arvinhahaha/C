#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*string s;
void dfs(int n)
{
	auto bgn=s.begin()+n;
	auto ed=s.end()-n-1;
	if(bgn!=ed&&bgn<ed)
		{
			char tch=*bgn;
			*bgn=*ed;
			*ed=tch;
			cout<<s<<endl;
			dfs(n+1);
		}
 } */
 void tra(char str[],int begin,int end)
 {
 	if(begin>=end)
 	return;
 	swap(str[begin],str[end]);
 	cout<<str<<endl;
 	tra(str,begin+1,end-1);
 }
 int main()
{
	char str[81];
	int len,i;
	cin>>len>>str;
	tra(str,0,len-1);
	cout<<endl<<str;
	return 0;
 } 
