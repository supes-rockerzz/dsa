#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n=nums.size()-1;
        int i=0;
        vector<int> ans;
        ans.push_back(nums[i]);
        while(i<n){
            int j=i+1;
            if(nums[i]!=nums[j])
                ans.push_back(nums[j]);
            i++;
        }
        int k=ans.size();
        for(int i=0;i<k;i++){
            nums[i]=ans[i];
        }
        return k;
    }
 int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    int k=removeDuplicates(nums);
    cout<< k<<endl;
    for(int i=0;i<k;i++){
            cout<<nums[i]<<" ";
        }}