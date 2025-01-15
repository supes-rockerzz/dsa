#include <bits/stdc++.h> 
using namespace std;

void sortarray(int *arr,int i,int n){
    if(n==0 || n==1)
     return;
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[minindex]>arr[j])
        minindex=j;}
        swap(arr[i],arr[minindex]);
        sortarray(arr,i+1,n-1);
        }

int main(){
    int a[7]={10,1,7,4,8,2,11};
    int n=7;
    sortarray(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}        