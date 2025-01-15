#include<bits/stdc++.h>
using namespace std;
//codeforces 1294C

void prod(int n){
    int a,b;
    int c=1;
    int x=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=i; 
            break;}
    }
    n=n/a;
    for(int i=a+1;i*i<=n;i++){
        if(n%i==0){
            if((n/i)!=i){
                b=i;
            }
        }
    }
    c=n/b;
    if(c!=1 && c!=b && a*b*c==x){                    // eliminates every wrong answer
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int n; // no. of testcases
    cin>>n;
    int c[n];
    for (int i=0;i<n;i++){
        cin>>c[i];   // testcases
    }
    for(int i=0;i<n;i++){
        prod(c[i]);     // results
    } 
 }