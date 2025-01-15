#include<bits/stdc++.h>
using namespace std;

// sieve approach

  int countPrimes(int n) {
        int count=0;
        int ans;
       vector <bool> sieve(n+1,true);
        for(int i=2;i*i<=n;i++){
            if(sieve[i]==true){
            for(long long j=(long long) i*i;j<=n;j=j+i){
                sieve[j]=false;}
            } }
            for(int i=2;i<n;i++){
            if(sieve[i]==true){
                count++;
                ans=i;}}
                return ans;
                
        }


    int main(){
        int n;
        cin>>n;
        cout<<countPrimes(n)<<endl;
    }