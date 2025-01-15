#include<bits/stdc++.h>
using namespace std;

int duplicate(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];}
    int total=(n*(n+1))/2;
    int diff=total-sum;
    return n-diff;}

int main(){
    int x[6]={1,2,3,3,4,5};
    int dup= duplicate(x,5);
    cout<<dup<<endl;}
