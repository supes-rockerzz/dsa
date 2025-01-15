#include<bits/stdc++.h>
using namespace std;

void solve(string &s,int n){
    if(n==0)
     return;
    for(int i=0;i<n;i++){
    if(s[i]==s[i+1]){
        s.erase(i,2);
        solve(s,n-2);
    }}
    return;
}
string removeDuplicates(string s){
     int n=s.length();
     solve(s,n);
     for(int i=0;i<s.length();i++){
        cout<<s[i];
     }
}
int main(){
    string s;
    cin>>s;
    removeDuplicates(s);
}