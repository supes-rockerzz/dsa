  #include<bits/stdc++.h>
using namespace std;
  vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            temp=temp*temp;
            ans.push_back(temp);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
 int main(){
    vector<int> nums={-4,-1,0,3,10};
    vector<int> x=sortedSquares(nums);
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
 }   }