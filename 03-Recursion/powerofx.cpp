#include <bits/stdc++.h> 
using namespace std;

int power(int x,int n){
      if(n==0 || x==1)
        return 1;
      if(n==1){
        return x;
      }  
      int ans=power(x,n/2);
      if(n%2==0)
        ans=ans*ans;
      else
        ans=x*ans*ans;  
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
}