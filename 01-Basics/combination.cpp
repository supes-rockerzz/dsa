#include <bits/stdc++.h>
using namespace std;

int fact(int x){
    if(x==0 || x==1)
        return 1;
    else
       return (x*fact(x-1));
}

int nCr(int n,int r){
    if(r==0 || r==n)
      return 1;
    else
       return (fact(n)/(fact(r)*fact(n-r)));
}
int main(){
     int n,r;
     cin>>n;
     cin>>r;
     cout<<n<<"C"<<r<<" : "<<nCr(n,r)<<endl;
}