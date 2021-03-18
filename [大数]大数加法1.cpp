 #include<stdio.h>
  #include<algorithm>
  #include<iostream>
  #include<cstring>
  using namespace std;
  const int maxn = 1010; 
  int main(){
      char a[maxn];
      char b[maxn]; 
      cin>>a;
      cin>>b;
      //默认b要比a短 
      if(strlen(b)>strlen(a)) swap(a,b);
      int alen = strlen(a),blen = strlen(b);
      //在短的前面填0 
      for(int i=alen-1;i>=alen-blen;i--){
          b[i] = b[i-(alen-blen)];
          }
      for(int i=alen-blen-1;i>=0;i--){
          b[i]='0';
      }
      //模拟相加进位操作 
      int res[maxn];
      int cnt=0,jin=0;
      for(int i=alen-1;i>=0;i--){
              int num;
              num = (a[i]-'0')+(b[i]-'0')+jin;
              if(num>=10){   //需进位 
                  jin=num/10;
                  num%=10;
              }else{  //不需进位 
                  jin=0;    
              }
              res[cnt++] = num;
      }
      if(jin!=0) res[cnt++] = jin;
      for(int i=cnt-1;i>=0;i--){
          cout<<res[i];
      }
      return 0;
  }
