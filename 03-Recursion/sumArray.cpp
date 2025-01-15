#include<iostream>
using namespace std;

int sum(int arr[],int size){
    if(size==0)
      return 0;
    if(size==1)
      return arr[0];
        return arr[0]+sum(arr+1,size-1);  
}

int main(){
    int a[6]={2,8,10,11,11,13};
    cout<<sum(a,6)<<endl;
}