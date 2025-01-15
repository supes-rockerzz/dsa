 #include<bits/stdc++.h>
using namespace std;
     void solve(vector<int> nums,int i,set<vector<int>> &ans){
    if(i>=nums.size()){
        ans.insert(nums);
        return;
    }
    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        solve(nums,i+1,ans);
        //backtrack
          swap(nums[i],nums[j]);
    }}
    set<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        solve(nums,0,ans);
        return ans;
    }
int main(){
    vector <int> v={1,1,2};
    permuteUnique(v); 
}    