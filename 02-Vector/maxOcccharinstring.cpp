#include<bits/stdc++.h>
using namespace std;  
char getMaxOccuringChar(string str)
    {
      int a[26]={0};
      for(int i=0 ; i<str.length() ; i++){
          char x=str[i];
          int number=0;
          number=x-'a';
          a[number]++;
      }
    int maxi=-1,ans;
    for(int i=0 ; i<26 ; i++){
        if(maxi<a[i]){
            ans=i;
            maxi=a[i];
        }
    }
    
    return 'a'+ans;
    }

int main(){
    string str;
    cin>>str;
    cout<<getMaxOccuringChar(str);
}    