#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int mid,int e){
    int len=e-s+1;
   int *temp=new int[len];
   int left=s,right=mid+1,k=0;
   while(left<=mid && right<=e){
    if(arr[left]<=arr[right])
        temp[k++]=arr[left++];
    else
       temp[k++]=arr[right++];
   }
   while(left<=mid){
    temp[k++]=arr[left++];
   }
   while(right<=e){
    temp[k++]=arr[right++];
   }
   for(int i=s;i<=e;i++){
    arr[i]=temp[i-s];  // copy sorted elements in the original array
   }
    delete []temp;
}

void mergeSort(int *arr,int s,int e)
{
    if(s>=e)
      return;
     int mid=s+(e-s)/2;
    mergeSort(arr,s,mid); // sort left array
    mergeSort(arr,mid+1,e); // sort right array
    merge(arr,s,mid,e);   // merge both arrays
}

int main(){
    int a[9]={3,1,2,4,1,5,2,6,4};
    int n=9;
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}    