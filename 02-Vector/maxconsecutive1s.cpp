   #include<bits/stdc++.h>
using namespace std;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>x;
        int i=0;
        int j=i+1;
        while(j<=n){
            if((nums[j]==0 && nums[i]==1) ||(nums[i]==1 && j==n)){
                 int cnt=j-i;
                 if(j==n){
                  cnt=j-i+1;}
               x.push_back(cnt);
               i=j+1;
            }
           j++;
        }
        int maxi=x[0];
        for(int i=0;i<x.size();i++){
        maxi=max(maxi,x[i]);}
        return maxi;
    }

int main(){
    vector<int> nums = {1,0,1,1,0,1};
    cout<<findMaxConsecutiveOnes(nums)<<endl;
}    