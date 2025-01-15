#include<iostream>
using namespace std;

 bool isPrime(int num){
    int i=2;
    while(i<num){
        if(num%i==0){
            return 0;
        }
        i++;
    }
      return 1;
 }
int main(){
    int n;
    cin>>n;
    cout<<"Is number prime? "<<isPrime(n)<<endl;
}