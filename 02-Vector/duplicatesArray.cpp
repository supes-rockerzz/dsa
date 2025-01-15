#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        int a[100001]={0};
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            a[temp]++;
        }
        vector<int> ans;
        int k=0;
        for(int i=1;i<=100000;i++){
            if(a[i]==2 && k<=nums.size()-1){
               ans.push_back(i);
               k++;}
        }
        return ans;
    }

int main(){
    vector<int> nums={4,3,2,7,8,2,3,1};
    vector<int> v=findDuplicates(nums);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}    