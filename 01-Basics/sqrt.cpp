#include<bits/stdc++.h>
using namespace std;
long long int binarySearch(int n) {
    int s = 0, e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e) {
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid > n) {
            e=mid-1;
        }
        else  {
            ans=mid;
            s=mid+1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
    int mySqrt(int x) {
        if(x==1)
         return 1;
        else 
          return binarySearch(x); 
    }
int main(){
    int n;
    cin>>n;

    cout<<"square root of "<<n<<" : "<<mySqrt(n)<<endl;
}    