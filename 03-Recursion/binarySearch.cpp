#include<iostream>
using namespace std;

void print(int *nums,int s, int e){
    for(int i=s;i<=e;i++){
        cout<<nums[i]<<" ";
    }cout<<endl;
}
int binarySearch(int *nums,int s, int e, int target){
    print(nums,s,e);
    if(s>e)
     return -1;
    int mid=s+(e-s)/2; 
    cout<<" value of mid :"<<nums[mid]<<endl;
    if(nums[mid]==target)
      return mid;
    if(nums[mid]<target){
        return binarySearch(nums,mid+1,e,target);
    }  
    else{
        return binarySearch(nums,s,mid-1,target);
    }
}

int main(){
    int arr[6]={2,4,6,10,14,16};
    int target=14;
    int n=5;
    cout<<binarySearch(arr,0,n,target)<<endl;
}