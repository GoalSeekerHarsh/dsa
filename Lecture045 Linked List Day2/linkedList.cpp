#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node(int value){
            this->value = value;
            this->next = NULL;
        }
        ~Node(){
            this->next = NULL;
            delete next;
        }
};

void addNodeAtHead(Node*& head, int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void addNodeAtTail(Node*&tail , int value){
    Node* newNode = new Node(value);
    tail->next = newNode;
    tail = tail->next;
}


void print(Node *& head){
    Node*temp = head;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next; 
    }
    cout << endl;
}

Node* reverse(Node *& head ){
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main(){
    Node *head = new Node(20);
    Node *tail = head;
    addNodeAtHead(head,10);
    addNodeAtTail(tail,30);
    addNodeAtTail(tail,40);
    addNodeAtTail(tail,50);
    print(head);
    head = reverse(head);
    print(head);
}
