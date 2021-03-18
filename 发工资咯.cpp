#include<iostream>
using namespace std;
int check(int n)
{
	
	int count = 0;
	int t = 0;
	if(n>=100){
	t=n/100;
	n-=t*100;
	count+=t;
	}
	if(n>=50){
	t=n/50;
	n-=t*50;
	count+=t;
	}
	if(n>=10)
	{
	t=n/10;
	n-=t*10;
	count+=t;	
	}
	if(n>=5){
	t=n/5;
	n=n-(t*5);
	count+=t; }
	if(n>=2){
	t=n/2;
	n=n-(t*2);
	count+=t;} 
	if(n==1)
	{
	t=n;
	count+=t;	
	}
	return (count);
}
int main(){
    int n;
    while(cin>>n&&n){
        int m,tot=0;
        for(int i=0;i<n;i++){
            cin>>m;
            tot+=check(m);
        }
        cout<<tot<<endl;
    }}
