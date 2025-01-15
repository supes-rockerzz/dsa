#include <bits/stdc++.h>
using namespace std;

void niceArr(int a[],int k,int n){
    vector<int> b;
    int c;
    for(int i=0;i<n;i++){
        if(a[i]%k==0) {
            c=a[i]/k;}
        if(a[i]%k!=0 && (abs(a[i])<abs(a[i]+1) || abs(a[i])<abs(a[i]-1))){  
          if(a[i]>0){
            c=(a[i]/k)+1;}
            else{
             c=(a[i]/k)-1; }}
        b.push_back(c);}
    int s=0;
    for(int i=0;i<n;i++){
        s=s+b[i];}
    if(s==0)
     cout<<"yes";
    else
     cout<<"no";

}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];}
    niceArr(a,k,n);
    cout<<endl;}
    }
