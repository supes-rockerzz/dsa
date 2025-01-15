#include <bits/stdc++.h> 
using namespace std;

bool checkPalindrome(string &str,int i,int j){
    if(i>j)
      return true;
    if(str[i]!=str[j])
      return false;
    else{
        i++;
        j--;
        checkPalindrome(str,i,j);
    }    
}

int main(){
    string str="Noon";
    int n=str.length();
    bool isPalindrome=checkPalindrome(str,0,n-1);
    if(isPalindrome){
        cout<<"its a palindrome";    
    }
    else{
        cout<<"its not a palindrome";
    }
}