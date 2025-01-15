#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
    if(x < 0) return false;
    int n=x;
    int ans=0;
    while(n!=0){
        ans=ans*10+n%10;
        n/=10;
    }
    if(ans==x)
      return true;
    else
      return false;
}
int main(){
    int x;
    cin>>x;
    cout<<isPalindrome(x)<<endl;
}