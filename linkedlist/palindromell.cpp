class Solution {
public:

ListNode*reverselinked(ListNode* prev,ListNode*curr){
    if(curr==NULL){
        return prev;
    }

   ListNode*nextnode=curr->next;
   curr->next=prev;
   prev=curr;
   curr=nextnode;
   return reverselinked(prev,curr);

}

 ListNode*middlenode(ListNode* head){
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

    }
    return slow;    
 }  


 bool compareList(ListNode*head1,ListNode*head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->val!=head2->val){
            return false;
        }
        else{
            head1=head1->next;
            head2=head2->next;
        }
    }
    return true;
 }
    bool isPalindrome(ListNode* head) {
        //break into two half
        ListNode*midnode=middlenode(head);
        ListNode*head2=midnode->next;
        midnode->next=NULL;
    
        //reverse the secoud half

       ListNode*prev=NULL;
       ListNode*curr=head2;
       head2=reverselinked(prev,curr);

        //compare the two halfs
        bool ans=compareList(head,head2);
        return ans;
    }
};