#include<bits/stdc++.h>
using namespace std;
    bool valid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
          return 1;}
        return 0;  
    }
    char tolowercase(char ch){
        char x;
        if((ch>='a' && ch<='z')||(ch>='0'  && ch<='9')){
        return ch;}
        else{
        x = ch-'A'+'a';
        }
      return x;  
    }
    bool checkPalindrome(string s){
        int b=0,e=s.length()-1;
        while(b<=e){
            if(s[b]!=s[e]){
                return 0;
            }
            else{
                b++;
                e--;
            }
        }
        return 1;
    }
    bool isPalindrome(string s) {
            string temp="";
            for(int j=0;j<s.length();j++){
                if(valid(s[j])){
                   temp.push_back(s[j]);
                }
            }
           for(int j=0;j<temp.length();j++){
          temp[j]=tolowercase(temp[j]);
           }
         return  checkPalindrome(temp);
    }
int main(){
    string s;
    cin>>s;
    cout<<"Is Palindrome ? "<<isPalindrome(s);
}

