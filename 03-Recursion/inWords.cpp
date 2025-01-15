#include<iostream>
using namespace std;

void sayDigit(int n, string a[]){
    if (n == 0) {
        return;}
    int digit=n%10;
    sayDigit(n/10,a);
    cout<< a[digit]<< " ";

}
int main(){
    string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    sayDigit(n,a);
}