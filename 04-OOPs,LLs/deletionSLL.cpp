#include <bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node *next;
    
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

void print(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
Node* constructLL(vector<int> &a){
    Node *head=new Node(a[0]);
    Node *mover=head;
    int i=1;
    while(i<a.size()){
        Node *temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
        i++;
    }
    return head;
}
Node *deleteatpos(Node* &head,int k){
    if(head==NULL)
     return head;
    if(k==1){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }   
       Node*temp=head;
       Node *prev=NULL;
    int cnt=1;
    while(temp!=NULL){
        if(cnt==k){
            prev->next=temp->next;
            free(temp);
            return head;
            break;
        }
         prev=temp;
        temp=temp->next;
        cnt++;
        }
}
int main() {
     vector <int> a={1,2,4,8};
     Node * head=constructLL(a);
     print(head);
     head=deleteatpos(head,3);
     print(head);
}
