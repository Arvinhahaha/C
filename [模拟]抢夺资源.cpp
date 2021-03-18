#include<iostream>
#include<cstring>
using namespace std;

int main()
{

    int n,m;
    while(cin>>n>>m)
    {
        if(n % (m+1))
            cout<<"Gerlot"<<endl;
        else
            cout<<"Wildhunte"<<endl;
    }
    return 0;
}
