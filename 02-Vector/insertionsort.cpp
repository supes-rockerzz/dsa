#include <bits/stdc++.h> 
using namespace std;

void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){
             if(arr[j]>temp)          // checks where to place the ith element
                arr[j+1]=arr[j];
             else                   // already sorted
                 break;  
        }
        arr[j+1]=temp;
    }
}
int main(){
    vector <int> v={6,2,8,4,10};
    int n=v.size();
    insertionSort(n,v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}