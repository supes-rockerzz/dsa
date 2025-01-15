#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top;
    int size;
    int* arr;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;}
    void push(int n){
        if(size-top>1){
            top++;
            arr[top]=n;}
        else{
            cout<<"stack overflow"<<endl;
        }    
        }
    int pop(){
        if(top>=0){
            top--;
            return arr[top+1];}
        else{
            return -1;
        }    
    }    
    int peek(){
        if(top>=0){
            return arr[top];}
        else{
            cout<<"stack is empty"<<endl;
        }    
    }
    };
int main(){
    Stack s(5);
    s.push(90);
    s.push(28);
    cout<<s.pop()<<endl;
    cout<<s.pop();
}   
