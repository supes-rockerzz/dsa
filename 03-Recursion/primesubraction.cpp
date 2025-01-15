#include<bits/stdc++.h>
using namespace std;
    int maxPrime(int n) {
        int ans;
       vector <bool> sieve(n+1,true);
        for(int i=2;i*i<=n;i++){
            if(sieve[i]==true){
            for(long long j=(long long) i*i;j<=n;j=j+i){
                sieve[j]=false;}
            } }
            for(int i=2;i<n;i++){
            if(sieve[i]==true){
                ans=i;}}
                return ans;         
        }

    bool primeSubOperation(vector<int>& nums) {
        int n=nums.size();
        // if(is_sorted(nums.begin(),nums.end()) && nums[i]<nums[i+1])
        //   return true;
        // else
         int i=n-1;
         while(i>0){
         if(nums[i-1]>nums[i]){
            int p=maxPrime(nums[i-1]);
            nums[i-1]=nums[i-1]-p;}
           i--; }
           i=0;
        while(i<n-1){
          if(nums[i]>=nums[i+1]){
            return false;}
            i++;
        }
        return true;
        // if(is_sorted(nums.begin(),nums.end()))
        //   return true;
    }
 int main() {
  vector<int> v={15,20,17,7,16};
  cout<<primeSubOperation(v)<<endl;
   }  