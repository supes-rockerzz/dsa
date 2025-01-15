#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        swap(a[i],a[j]);
    }
}
void swapalter(int a[],int n){

    for(int i=0;i+1<n;i=i+2){
        swap(a[i],a[i+1]);}
    }

int main(){
    int x[6]={2,7,9,1,3,8};
    for(int i=0;i<6;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    //reverse(x,6);
    swapalter(x,6);
      for(int i=0;i<6;i++){
        cout<<x[i]<<" ";
    }
}