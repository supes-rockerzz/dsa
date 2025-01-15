#include <bits/stdc++.h> 
using namespace std;

void sortarray(int *arr,int i,int n){
    if(n==0 || n==1)
      return;
    int j=i-1;
    int temp=arr[i];
    for(;j>=0;j--){
        if(arr[j]>temp)
          arr[j+1]=arr[j];
        else
          break;  
    }  
    arr[j+1]=temp;
    sortarray(arr,i+1,n-1);
    }
    
int main(){
    int a[7]={10,1,7,4,8,2,11};
    int n=7;
    sortarray(a,1,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}    