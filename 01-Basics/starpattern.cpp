#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
             //spaces
        for(int j=i-1;j>0;j--){
            cout<<"   ";}
            //stars
        for(int k=1;k<=n-i+1;k++){
            cout<<" "<<k+i-1<<" ";
        }
        cout<<endl;
   
    }
}