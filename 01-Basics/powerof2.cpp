#include<bits/stdc++.h>
using namespace std;
 bool isPowerOfTwo(int n) {
        bool isPower=true;
        int c=0;
        if(n==0)
          return isPower=false;
        while (n!=0 && n>0){
            if(n&1)
                c++;
            n=n>>1; }
        if(c==1)
          return isPower=true;      
        else
          return isPower=false;
    }
int main(){
    int x;
    cin>>x;
    cout<<"Is "<<x <<" power of 2 ? "<<isPowerOfTwo(x);
}    