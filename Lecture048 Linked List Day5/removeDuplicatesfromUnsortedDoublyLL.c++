#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
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
*****************************************************************/

// Problem Link-> https://shorturl.at/15bsG    
/* Complexity Analysis:-
Time Complexity: O(N), where nn is the number of nodes in the linked list.
Space Complexity: O(N), primarily due to the space used by the hash map to store unique node values.
*/


Node *removeDuplicates(Node *head)
{
    // Write your code here.
    Node* currentNode = head;
    Node* prevNode = NULL;
    unordered_map<int, bool> visitedNode;

    while(currentNode != NULL) {
        if (!visitedNode[currentNode->data]) {
            visitedNode[currentNode->data] = true;
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
        else {
            prevNode->next = currentNode->next;
            free(currentNode);
        }
        currentNode = prevNode->next;
    }
    return head;
}
