#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void F1(int h)
{
	string t[25]={"zero","one","two","three","four","five","six","seven","eight",
"nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four"};
	cout<<t[h]<<" ";
}
void F2(int m)
{
	string t[21]={"o'clock","one","two","three","four","five","six","seven","eight",
"nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
	string t2[6]={"","","twenty","thirty","forty","fifty"};
	if(m<=20)
	{
		cout<<t[m];
	}
	else{
		cout<<t2[m/10]<<" ";
		if(m%10)
		cout<<t[m%10];
	}
}

int main()
{
	int m,n;
	cin>>m>>n;
	F1(m);
	F2(n);
	return 0;
}
