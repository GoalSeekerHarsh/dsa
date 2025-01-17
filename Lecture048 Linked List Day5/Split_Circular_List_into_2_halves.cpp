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
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
void InsertAtHead(int data,Node* &head,Node* tail){
    Node* new_node=new Node(data);
    new_node->next=head;
    tail->next=new_node;
    head=new_node;
}
int length(Node* &head){
    int length=1;
    Node* temp=head;
    while(temp->next!=head){
        length++;
        temp=temp->next;
    }
    return length;
}
void splitinto2(Node* &head,Node* &tail){
    Node* temp=head;
    int pivot=0;
//finding node pos about which to split CLL
    int size=length(head);
    if(size%2==0){pivot=size/2;}
    else{pivot=(size+1)/2;}
    int count=1;
    while(count!=pivot){
        temp=temp->next;
        count++;
    }
    Node* head2=temp->next;
    temp->next=head;
    cout<<"First Half of given CLL"<<endl;
    print_LL(head);
    tail->next=head2;
    cout<<"Second Half of given CLL"<<endl;
    print_LL(head2);
}
int main(){
    Node* node1=new Node(100);
    Node* head=node1;
    Node* tail=node1;
    InsertAtHead(10,head,tail);
    InsertAtHead(20,head,tail);
    InsertAtHead(30,head,tail);
    InsertAtHead(40,head,tail);
    InsertAtHead(50,head,tail);
    cout<<"COMPLETE CIRCULAR LINKED LIST"<<endl;
    print_LL(head);
    splitinto2(head,tail);
    return 0;
}
