#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
            //1st triangle
        for(int k=1;k<=n-i+1;k++){
            cout<<" "<<k<<" ";
        }
        //stars
        if(i>1){
        for(int l=1;l<=2*(i-1);l++){
            cout<<" * ";
        }}
        //2nd traingle
           for(int j=n-i+1;j>0;j--){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }}