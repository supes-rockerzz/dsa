#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
         //constructor
    Node(int data){
        this-> data=data;
        this-> next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }};
 void reverse(Node*head,Node*curr,Node*prev){
    if(curr==NULL){
        head=prev;
        return;}
    Node *forward=curr->next;
    reverse(head,forward,prev);
    curr->next=prev;

 } 
 Node *LinkedList 
int main(){

}  