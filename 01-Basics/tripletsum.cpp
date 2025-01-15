#include<bits/stdc++.h>
using namespace std;

int tripletsum(int a[],int n,int s){
    int x=0;
    for( int i=0;i<n;i++){
        for( int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if(a[i]+a[j]+a[k]==s && x==0){
                cout<< a[i]<<" "<< a[j]<<" "<<a[k]<<endl;
                x=i+j+k;
            }
            }
            }
            }
           
}

int main(){
    int a[5]={10 ,5 ,5 ,5 ,2};
    tripletsum(a,5,12);
}