#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
         //constructor
    Node(int data){
        this-> data=data;
        this-> next=NULL;
        this->prev=NULL;
    }
};//traversal
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void InsertatHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp-> next=head;
    head->prev=temp;
    head=temp;
}
void InsertatTail(Node* &tail,int d){
    Node* temp=new Node(d); 
    tail-> next=temp;
    temp->prev=tail;
    tail=temp;
}
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
    temp->next->prev=nodetoinsert;
    nodetoinsert->prev=temp;
    temp->next=nodetoinsert;
}

int main(){
    Node *node1=new Node(3);
    Node *head=node1;
    Node *tail=node1;
    print(head);
    //cout<<getlength(head);
    InsertatHead(head,5);
    print(head);
        InsertatHead(head,7);
    print(head);
        InsertatTail(tail,11);
    print(head);
     cout<<"head : "<<head->data<<endl;
        cout<<"tail : "<<tail->data<<endl;
    InsertatPos(head,tail,3,22);
        print(head);
         cout<<"head : "<<head->data<<endl;
        cout<<"tail : "<<tail->data<<endl;
    
}
