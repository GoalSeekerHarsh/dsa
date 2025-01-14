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


void InsertAtTail(Node* &tail,Node* &node_copy){
    tail->next=node_copy;
    tail=node_copy;
}


void sort2(Node* &head){
    Node* copy=NULL;
    Node* temp=head;
//zeros LL first node
    Node* zerohead=new Node(-1);//dummy node
    Node* zerotail=zerohead;
//ones LL first node
    Node* onehead=new Node(-1);//dummy node
    Node* onetail=onehead;
//zeros LL twos node
    Node* twohead=new Node(-1);//dummy node
    Node* twotail=twohead;
//3 separate LL for storing 0s,1s,2s
    while(temp!=NULL){
        if(temp->data==0){
            Node* copy=new Node(0);
            InsertAtTail(zerotail,copy);}
        else if(temp->data==1){
            Node* copy=new Node(1);
            InsertAtTail(onetail,copy);}
        else{
            Node* copy=new Node(2);
            InsertAtTail(twotail,copy);}
        temp=temp->next;
    }
//merging above 3 LL
    zerotail->next=onehead->next;
    if(onehead->next==NULL){zerotail->next=twohead->next;}
    else{onetail->next=twohead->next;}
    Node* head_0=zerohead->next;
    Node* head_1=onehead->next;
    Node* head_2=twohead->next;
    delete onehead;
    delete twohead;
    delete zerohead;
    head=head_0;
}

//merging two linked lists
void merge(Node* &head1,Node* &head2){
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp2!=NULL){
        temp1=head1;
        bool inserted=false;
        Node* copy=new Node(temp2->data);
        while(temp1->next!=NULL){
            if(temp2->data<=head1->data){
                copy->next=temp1;
                head1=copy;
                temp1=head1;
                inserted=true;
                break;
            }
            else if(temp2->data>=temp1->data && temp2->data<=temp1->next->data){
                copy->next=temp1->next;
                temp1->next=copy;
                temp1=temp1->next;
                inserted=true;
                break;
            }
            else{temp1=temp1->next;}
        }
        if(inserted=false){temp1->next=copy;}
        temp2=temp2->next;
    }
}

int main(){
    Node* node1=new Node(0);
    Node* head=node1;
    Node* tail=node1;
    Node* node2=new Node(2);
    Node* head2=node2;
    Node* tail2=node2;
    InsertAtHead(1,head);
    InsertAtHead(0,head);
    InsertAtHead(0,head);
    InsertAtHead(2,head);
    InsertAtHead(2,head2);
    InsertAtHead(1,head2);
    InsertAtHead(0,head2);
    InsertAtHead(2,head2);
    InsertAtHead(2,head2);
    InsertAtHead(1,head2);
    cout<<"LINKED LIST 1 BEFORE SORTING"<<endl;
    print_LL(head);
    cout<<"LINKED LIST 1 AFTER SORTING"<<endl;
    sort2(head);
    print_LL(head);
    cout<<"\nLINKED LIST 2 BEFORE SORTING"<<endl;
    print_LL(head2);
    cout<<"LINKED LIST 2 AFTER SORTING"<<endl;
    sort2(head2);
    print_LL(head2);
    cout<<"LINKED LIST AFTER MERGING ABOVE LINKED LISTS"<<endl;
    merge(head,head2);
    print_LL(head);
    return 0;
}