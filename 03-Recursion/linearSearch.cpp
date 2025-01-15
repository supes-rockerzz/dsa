#include<iostream>
using namespace std;

bool isFound(int arr[],int size,int key){
    if(size==0)
      return false;
    if(arr[0]==key)
       return true;
    else
        return isFound(arr+1,size-1,key);  
}

int main(){
    int a[5]={3,5,1,2,6};
    cout<<isFound(a,5,2)<<endl;
}