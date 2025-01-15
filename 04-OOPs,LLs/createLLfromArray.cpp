#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
         //default constructor
   Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){  //parametrised constructor
        this-> data=data;
        this-> next=NULL;
    }
    ~Node(){  //destructor
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }};
Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error" << std::endl;
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Node* createLinkedList(vector<int>& arr, int n) {
    Node* head = NULL;
    Node* temp = NULL;

    for (int i = 0; i < n; i++) {
        Node* newNode = createNode(arr[i]);
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
    return head;
}
void printLinkedList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
  Node* constructLL(vector<int>& arr) {
        int n=arr.size();
        Node *head=createLinkedList(arr,n);
        printLinkedList(head);
    }
int main(){
    vector<int> v={1,2,3,4,5};
    constructLL(v);
}    