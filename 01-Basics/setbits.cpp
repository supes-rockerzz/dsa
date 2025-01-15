#include<bits/stdc++.h>
using namespace std;

int setbits(int x){
  int bit=0;
  while(x){
    if(x & 1){
      bit++;}
    x = x >> 1;
  }
  return bit;
}
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    int ans=setbits(a)+setbits(b);
      cout<<"Total no. of setbits :"<< ans;
      }
