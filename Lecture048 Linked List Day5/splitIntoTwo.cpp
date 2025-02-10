#include <bits/stdc++.h> 
/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

void splitCircularList(Node *head)
{
    Node* slow = head;
    Node* fast = head->next;
    while(fast->next!=head){
        slow = slow->next;
        fast = fast->next->next;
    }
    fast->next = slow->next;
    slow->next = head;
}