#include<bits/stdc++.h>
using namespace std;
 int distinctPrimeFactors(int nums[],int n) {
     vector<int> x;
     for(int j=0;j<n;j++){
    for(int i=2;i*i<=nums[j];i++){
        while(nums[j]%i==0){
           x.push_back(i);
           nums[j]=nums[j]/i;
        }
    }
    if(nums[j]>1)
     x.push_back(nums[j]);
    }
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
      set<int> s(x.begin(),x.end());
     for(const auto& e : s){
        cout<<e<<" ";
     } 
}

int main(){
   int nums[6]={2,4,3,7,10,6};
   distinctPrimeFactors(nums,6);
}