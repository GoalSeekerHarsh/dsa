#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print_LL (Node* &head){
    Node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
void InsertAtHead(int data,Node* &head){
    Node* new_node=new Node(data);
    new_node->next=head;
    head=new_node;
}
void sort(Node* &head){
    int count_0=0;
    int count_1=0;
    int count_2=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){count_0++;}
        else if(temp->data==1){count_1++;}
        else{count_2++;}
        temp=temp->next;
    }
    temp=head;
    for(int i=1;i<=count_0;i++){
        temp->data=0;
        temp=temp->next;
    
    }
    for(int i=1;i<=count_1;i++){
        temp->data=1;
        temp=temp->next;
    }
    for(int i=1;i<=count_2;i++){
        temp->data=2;
        temp=temp->next;
    }
}
int main(){
    Node* node1=new Node(0);
    Node* head=node1;
    Node* tail=node1;
    InsertAtHead(1,head);
    InsertAtHead(0,head);
    InsertAtHead(0,head);
    InsertAtHead(2,head);
    InsertAtHead(0,head);
    cout<<"LINKED LIST BEFORE SORTING"<<endl;
    print_LL(head);
    cout<<"LINKED LIST AFTER SORTING"<<endl;
    sort(head);
    print_LL(head);
    return 0;
}