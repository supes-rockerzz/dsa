#include <bits/stdc++.h> 
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){        // compares all other elements with ith element for minimum value
            if(arr[j]<arr[minidx])
                minidx=j;
        }
        swap(arr[minidx],arr[i]);      // swaps minimum element with ith one
    }
}    

int main(){
    vector <int> v={6,2,8,4,10};
    int n=v.size();
    selectionSort(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}