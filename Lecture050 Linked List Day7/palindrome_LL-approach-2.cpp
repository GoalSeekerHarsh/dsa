/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=new ListNode(head->val);
        ListNode* temp=head;
        ListNode* forward=NULL;
        while(temp!=NULL){
            if(temp->next!=NULL){forward=new ListNode(temp->next->val);}
            curr->next=prev;
            prev=curr;
            curr=forward;
            temp=temp->next;
        }
        temp=head;
        while(prev!=NULL){
            if(prev->val==temp->val){
                prev=prev->next;
                temp=temp->next;
            }
            else{
                return false;
            }
        }
        return true;

    }
};