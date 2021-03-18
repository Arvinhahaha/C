#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn=1010;
char a[maxn];
char b[maxn];
int main()
{
	int lena,lenb;
	cin>>a>>b;
	//看好了这是细节 
	if(strlen(a)<strlen(b)) swap(a,b);
	lena=strlen(a),lenb=strlen(b);
	for(int i=lena-1;i>=lena-lenb;i--)
		{
			b[i]=b[i-(lena-lenb)];
		}
		for(int i=lena-lenb-1;i>=0;i--)
		{
			b[i]='0';
		}
	
	int res[maxn];
	int cnt=0,jin=0;
	for(int i=lena-1;i>=0;i--)
	{
		int num;
		num=(a[i]-'0')+(b[i]-'0')+jin;
		if(num>=10)
		{
			jin=num/10;
			num%=10;
		}
		else {
			jin=0;
		}
		res[cnt++]=num;	
	}
	if(jin!=0) res[cnt++]=jin;
	for(int i=cnt-1;i>=0;i--)
	cout<<res[i];
	return 0;
}
