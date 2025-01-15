#include<bits/stdc++.h>
using namespace std;
int countSegments(string s) {
    int n=s.length();
    int cnt=0;
    if(n==0)
      return cnt;
        for(int i=0;i<n;i++){
            char x=s[i];
            int a=int(x);
            if(i==0 && a==32){
                return 0;
            }
            if(a==32)
             cnt++;
        }
        return cnt+1;
    }
int main(){
    string s="   ";
    cout<<s<<endl;
    int ans=countSegments(s);
    cout<<ans;
}    