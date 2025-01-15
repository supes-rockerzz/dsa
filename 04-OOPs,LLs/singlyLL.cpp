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
    }
  
};// traversing the sLL
  void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp=temp-> next;
    }cout<<endl;
    }

void InsertatHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp-> next=head;
    head=temp;
}
void InsertatTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail-> next=temp;
    tail=temp;
}
// insetion at any node
void InsertatPos(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        InsertatHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp-> next;
        cnt++;}
    if(temp->next==NULL){
        InsertatTail(tail,d);
        return;
    }    
    Node * nodetoinsert=new Node(d);
    nodetoinsert-> next=temp-> next;
    temp->next=nodetoinsert;
}

void deleteatpos(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp=head;
        head=head-> next;
        temp->next=NULL;
        delete temp;}
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;}    
    prev->next=curr->next;
    if(prev->next==NULL){
        tail=prev;
    }
     curr->next=NULL;
    delete curr;    
}
int main(){
    Node* node1=new Node(10);
   Node* head=node1;
    print(head);
   /* InsertatHead(head,12);    
    print(head);
    InsertatHead(head,15);    
    print(head);*/
    Node* tail=node1;
    InsertatTail(tail,20);
    print(head);
     InsertatTail(tail,30);
    print(head);
    InsertatPos(head,tail,3,22);
    print(head);
    cout<<"head : "<<head->data<<endl;
        cout<<"tail : "<<tail->data<<endl;
    deleteatpos(head,tail,3);    
      print(head);
       cout<<"head : "<<head->data<<endl;
        cout<<"tail : "<<tail->data<<endl;
}