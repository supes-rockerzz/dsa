#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurance(int a[],int n){
    int c[n];
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j] && a[i]!=INT_MIN){
             x++;
             a[j]=INT_MIN;}
        }
        if(a[i]!=INT_MIN)
        c[i]=x;}
            for(int i=0;i<n;i++){
                cout<<c[i]<<" ";}
                cout<<endl;  
     for(int i=0;i<5;i++){
           for(int j=i+1;j<7;j++){
         if(c[i]==c[j]){
           return false;
           break;}
     }}
     return true;
     }   

int main(){
    int a[15] = {-11,-14,0,10,15,15,10,0,10,10,15,15,-11,-11,15};
    cout<<"is unique?"<<uniqueOccurance(a,15);
}     