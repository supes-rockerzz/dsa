#include<iostream>
using namespace std;

bool isSorted(int v[],int size){
    if(size==0 || size==1)
      return true;
      if(v[0]>v[1])
        return false;
      else
        return isSorted(v+1,size-1);  
}

int main(){
    int v[3]={8,5,3};
    cout<<isSorted(v,3)<<endl;
}