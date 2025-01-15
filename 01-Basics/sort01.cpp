#include<bits/stdc++.h>
using namespace std;

void sort01(int a[],int n){
    int i=0,k=n-1;
    while(i<=k)
   { 
        if(a[i]==0)
          i++;
        else if(a[k]==1)
          k--; 
        else
          swap(a[i],a[k]);
            
    }
}

int main(){
    int a[8]={0,1,1,1,0,0,1,1};
    sort01(a,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
}