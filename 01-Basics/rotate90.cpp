#include<bits/stdc++.h>
using namespace std;  
void rotate(int a[][3],int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<3;j++){
        if(i<=j){
                swap(a[i][j],a[j][i]);}}

        
}
for(int i=0;i<r;i++){
        for(int j=0;j<3;j++){
            int e=2-j;
        if(j<=e){
                swap(a[i][j],a[i][e]);}}}
                } 
        
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cout<<a[i][j]<<" ";
        }
        cout<<endl;}
        rotate(a,3);
         for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cout<<a[i][j]<<" ";
        }
        cout<<endl;}
}