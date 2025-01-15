#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0,prod=1;
    while(n!=0){
        int i=n;
        i=i%10;
        sum=sum+i;
        prod=prod*i;
        n=n/10;
    }
    cout<<prod-sum<<endl;
}