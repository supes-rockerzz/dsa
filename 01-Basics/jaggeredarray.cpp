#include <bits/stdc++.h>
using namespace std;

int main() {
   int row;
   cin >> row;
   int **arr=new int *[row];
   for(int i=0,j=i+1;i<row;i++){
       arr[i]=new int[j]; 
   }
   int num=1;
   for(int i=0;i<row;i++){
       for(int j=0;j<i+1;j++){
           arr[i][j]=num++;
       }
   }
    for(int i=0;i<row;i++){
       for(int j=0;j<i+1;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
}
