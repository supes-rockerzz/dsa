#include<bits/stdc++.h>
using namespace std;

int N=1000000;
int sieve[1000001];
// sieve approach
 void createSieve() {
     for(int i=2;i<=N;i++){
        sieve[i]=1;
     }
        for(int i=2;i*i<=N;i++){
            if(sieve[i]==1){
            for(long long j=(long long) i*i;j<=N;j=j+i){
                if(sieve[j]!=0){
                sieve[j]=0;
                sieve[i]++;}
            } }
            
        }}

int main(){
    createSieve();
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<sieve[n]<<endl;
    }
}