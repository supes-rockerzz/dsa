#include <bits/stdc++.h> 
using namespace std;

void sortarray(int *arr,int n){
    if(n==0 || n==1)
       return;
    int count=0;   
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
           swap(arr[i],arr[i+1]);
           count++;}
    }   
    if(count==0)
      return;
    sortarray(arr,n-1);
}

int main(){
    int a[7]={10,1,7,4,8,2,11};
    int n=7;
    sortarray(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}