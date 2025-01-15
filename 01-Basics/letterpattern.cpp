#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        char x='A'+i-1;
        for(int j=1;j<=n;j++){
            cout<<x<<" ";
            x++;
        }
            cout<<endl;

    } 
} 