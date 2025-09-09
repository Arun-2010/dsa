class Solution {
public:
    int getlength(ListNode* head){
        int len=0;
        ListNode*temp=head;
        while(temp!=0){
            len++;
            temp=temp->next;
        }
        return len; 
    }
    ListNode* middleNode(ListNode* head) {
        //  int n=getlength(head);
        //  int position=(n/2)+1;
        
        //  ListNode*temp=head;
        //  while(position!=1){
        //    position--;
        //     temp=temp->next;
        //  }
        //  return temp;

        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
};


