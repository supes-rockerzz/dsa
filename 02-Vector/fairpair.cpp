#include<bits/stdc++.h>
using namespace std;
long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){  
            if(nums[i]+nums[j]>=lower && nums[i]+nums[j]<=upper){
                cnt++;
            }
        }}
        return cnt;
    }
int  main(){
    vector<int> v={1,7,9,2,5};
    cout<<countFairPairs(v,11,11)<<endl;
}   