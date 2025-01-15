#include<bits/stdc++.h>
using namespace std;
 string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
}

int main(){
    string s;
    string part;
    cin>>s;
    cin>>part;
    cout<<"string after removal of all substring occurances : "<<removeOccurrences(s,part);
}