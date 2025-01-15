#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
      for(int i=1;i<n;i++){
          int count=0;
          for(int j=0;j<n-i;j++){
            if (arr[j] > arr[j + 1]) {      // compares two adjacent elements till (n-1)th element
              swap(arr[j], arr[j + 1]);
              count++;
            }
          }
         if(count==0)
           break;
      }
}

int main(){
    vector <int> v={6,2,8,4,10};
    int n=v.size();
    bubbleSort(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}