#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;

    }
    
    ~Node(){
        int value=data;
        if(this->next!=nullptr){
            delete next; 
            /*delete next; invokes the destructor of the next node, 
            which does the same, so the whole chain is freed recursively. 
            When the recursion returns, the current node prints and finishes*/
            this->next=nullptr;
        }
        cout<< "memory is free"<<endl;
    }
    /*🧪 Dry run on a 3-node list
List:
head → [1] → [2] → [3] → NULL
(Imagine addresses: N1, N2, N3)
You do:
delete head;   // delete N1
Call sequence (depth-first recursion)
~Node(1) runs
sees next != NULL → calls delete next → calls ~Node(2)
~Node(2) runs
sees next != NULL → calls delete next → calls ~Node(3)
~Node(3) runs
next == NULL → doesn’t recurse
prints: memory is free for node with data 3
returns to caller (~Node(2))
Back in ~Node(2):
this->next = NULL (sets its own next to null; not strictly necessary)
prints: memory is free for node with data 2
returns to caller (~Node(1))
Back in ~Node(1):
this->next = NULL
prints: memory is free for node with data 1
returns to the original delete head call (done)
✅ Output order
memory is free for node with data 3
memory is free for node with data 2
memory is free for node with data 1
*/

};
Node* insertAtTail(int data,Node* &tail){
        Node* temp=new Node(data);
        tail->next=temp;
        tail=temp;
        temp->next=nullptr;
        delete temp;
        return tail;
    }
    Node* insertAtHead(int data,Node* &head){
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
        temp->next=nullptr;
        delete temp;
        return head;
    }
    Node* deleteAtMiddle(Node* &head,int position){
        Node* curr=head;
        Node* prev=nullptr;
        
        //prev->next=curr;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
            
        }
        if(cnt==1){
            head=head->next;
        }
        prev->next=curr->next;
        curr->next=nullptr;
        delete curr;
        return head;

        


    }
    Node* insertAtMiddle(int d,int position, Node* &head){
        Node* curr=head;
        
        //prev->next=curr;
        int cnt=1;
        while(cnt<position-1){
            curr=curr->next;
            cnt++;
            
        }
        if(cnt==1){
            head=head->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
        return head;
    }
    void print(Node* &head){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        return;
    }
                     
int main(){
    int d=5;
    Node* temp=new Node(d);
    Node* head=temp;
    Node* tail=temp;


    
return 0;
}