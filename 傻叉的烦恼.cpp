#include<iostream>
using namespace std;
int N=7;
int main()
{
    int m,n,minnum=0,t=1,x=0;
   while(N--)
    {
        cin>>m>>n;
        if(m+n>8)
        {
            if(minnum<m+n)
            {
            	minnum=m+n;
                x=t;
            }
        }
        t++;
    }
    cout<<x;
}
