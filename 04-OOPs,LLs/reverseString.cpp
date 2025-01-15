#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> s;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
     cout<<s.size()<<endl; 
    string ans="";
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();}
    cout<<s.size()<<endl;    
    cout<<ans;    
}