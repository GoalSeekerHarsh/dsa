/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
void InsertAtTail(Node* &node, Node* &tail){
    tail->next=node;
    tail=node;
}

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> map;
        Node* temp=head;
        Node* copy_head=NULL;
        Node* copy_tail=NULL;
//copying LL through next pointer
        while(temp!=NULL){
            Node* copy=new Node(temp->val); //deep copy of current temp node
            map[temp]=copy; //mapping original and its copy node
            if(copy_head==NULL){
                copy_head=copy;
                copy_tail=copy;
            }
            else{InsertAtTail(copy,copy_tail);}
            temp=temp->next;
        }
//cloning random pointer connections through map  
        temp=head;
        Node* temp2=copy_head;
        while(temp!=NULL && temp2!=NULL){
            Node* curr_random=temp->random;
            temp2->random=map[curr_random];
            temp=temp->next;
            temp2=temp2->next;
        }
        return copy_head;
    }
};