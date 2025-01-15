#include<bits/stdc++.h>
using namespace std;

//SPOJ-Kth prime

int N=86028121;
bool sieve[86028122];
vector <int>ds;
// sieve approach
     void createSieve() {
     for(int i=2;i<=N;i++){
        sieve[i]=true;
     }
        for(int i=2;i*i<=N;i++){
            if(sieve[i]==true){
            for(long long j=(long long) i*i;j<=N;j=j+i){
                sieve[j]=false;
            } }
            
        }
        for(int i=2;i<=N;i++){
            if(sieve[i]==true){
                ds.push_back(i);
            }   } 
 }

 int main(){
    createSieve();
    int q;  // no. of queries
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        cout<<ds[k-1]<<endl;   // returns kth prime for each query
    }
 }