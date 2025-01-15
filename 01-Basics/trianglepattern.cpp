#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
             //spaces
        for(int j=n-i;j>0;j--){
            cout<<"   ";}
            //1st triangle
        for(int k=1;k<=i;k++){
            cout<<" "<<k<<" ";
        }
        //2nd triangle
        if(i>1){
        for(int l=1;l<i;l++){
            cout<<" "<<i-l<<" ";
        }}
        cout<<endl;
    }}