#include<bits/stdc++.h>
using namespace std;  

int rowsum(int a[][4],int x){
    int sum=0;
    for(int i=0;i<4;i++){
       sum+=a[x][i];
    }
    return sum;
}
int main(){
    int a[2][4]={{1,2,3,4},{4,5,6,4}};
    int maxsum;
    int s1=rowsum(a,0);
    int s2=rowsum(a,1);
    maxsum=max(s1,s2);
    cout<<"largest row sum : "<<maxsum;
}