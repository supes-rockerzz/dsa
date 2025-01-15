#include<bits/stdc++.h>
using namespace std;

    int peakIndexInMountainArray(int arr[], int n) {
      int s=0,e=n-1;
      int mid=s+(e-s)/2;
      while(s<=e){
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
         return mid;
        else if(arr[mid]<arr[mid+1])
          s=mid+1;
        else
         e=mid;
        mid=s+(e-s)/2; 
      } 
      return -1;
      }
      int main(){
        int a[3]={5,1,3};
        cout<<peakIndexInMountainArray(a,3)<<endl;
      }
