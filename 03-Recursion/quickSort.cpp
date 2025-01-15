#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
         count++;
    }
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;     
               }
         if(i<pivotIndex && j>pivotIndex) 
           swap(arr[i++],arr[j--]);     
    }
   return pivotIndex;

}
void quickSort(int *arr,int s,int e)
{
    if(s>=e)
      return;
     int p=partition(arr,s,e);
    quickSort(arr,s,p-1); // sort left array
    quickSort(arr,p+1,e); // sort right array
}  

int main(){
    int a[7]={10,1,7,4,8,2,11};
    int n=7;
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}    