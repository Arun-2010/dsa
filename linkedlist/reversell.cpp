class Solution {
public:


  ListNode*reverseusingrecurssion(ListNode*prev,ListNode*curr){
    if(curr==NULL){
        return prev;
    }
    ListNode*nextnode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextnode;
    ListNode*recur=reverseusingrecurssion(prev,curr);
   return recur;

  }
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
        ListNode*curr=head;
        return reverseusingrecurssion(prev,curr);
    }
};




another way
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
        ListNode*curr=head;
        while(curr!=NULL){
            ListNode*next=curr->next;
            curr->next=prev;
           prev=curr;
           curr=next;
        }
        return prev;
    }
};
