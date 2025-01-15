#include<iostream>
using namespace std;

int fibo(int x){
    int a1=0,a2=1;
    if(x==1)
      return a1;
    else if(x==2)  
      return a2;
    else
      return fibo(x-1)+fibo(x-2);  

}
int main(){
    int n;
    cin>>n;
    cout<<n<<"th fibonacci term : "<<fibo(n);
}