#include<bits/stdc++.h>
using namespace std;

int pairsum(int a[],int n,int s){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==s){
                cout<< min(a[i],a[j])<<" "<<max(a[i],a[j])<<endl;
            }
            }}}

int main(){
    int a[5]={2,-3,3,3,-2};
    pairsum(a,5,0);
}