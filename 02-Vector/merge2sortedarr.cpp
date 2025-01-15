#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
       int *temp=new int[m+n];  ///dynamic memory allocation
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]!=0 && nums2[j]!=0){
            if(nums1[i]<=nums2[j])
              temp[k++]=nums1[i++];
            else
              temp[k++]=nums2[j++];  
        }}
        while(i<m && nums1[i]!=0){
             temp[k++]=nums1[i++];
        }
        while(j<n && nums2[j]!=0){
            temp[k++]=nums2[j++];
        }
        nums1.clear();    /// clearing contents of vector nums1
        for(int k=0;k<m+n;k++){
            nums1.push_back(temp[k]);
        }
        for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }
}


int main(){
    vector<int> a={1,2,3,0,0,0};
    vector<int> b={2,5,6};
    merge(a,3,b,3);

}