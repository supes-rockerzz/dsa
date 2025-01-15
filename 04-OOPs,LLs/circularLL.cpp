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
void insertNode(int d,Node * &tail,int element){
        ///empty list
        if(tail==NULL){
            Node * node1=new Node(d);
            tail=node1;
            node1->next=node1;
        }
        else{
            Node *curr=tail;
            while(curr->data!=element){
                curr=curr->next;
            }
            Node * temp=new Node(d);
            temp->next=curr->next;
            curr->next=temp;
        }
}
void print(Node * &tail){
     Node* temp=tail;
    do{
        cout<<temp-> data<<" ";
        temp=temp-> next;
    }while(tail!=temp);
    cout<<endl;
}
int main(){
    Node * tail = NULL;
    insertNode(3,tail,1);
    print(tail);
       insertNode(5,tail,3);
    print(tail);
       insertNode(7,tail,5);
    print(tail);
       insertNode(11,tail,7);
    print(tail);
       insertNode(9,tail,7);
    print(tail);
}
