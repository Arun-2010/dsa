// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class node{
    public:
    int data;
    node*next=NULL;


 node(){
     this->next=NULL;
 }
 
 node(int data){
     this->data=data;
     this->next=NULL;
     
 }
 
 static void printll(node*head){
     node*temp=head;
     while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<endl;
 }
 
 
  static void printlength(node*head){
     node*tmp=head;
     int count=0;
     while(tmp!=NULL){
        count++;
         tmp=tmp->next;
     }
     cout<<count;
 }
 
 
};
int main() {
  
   node*first=new node(10);
   node*second=new node(20);
   node*third=new node(30);
   node*fourth=new node(40);
   node*fifth=new node(50);
   
   first->next=second;
   second->next=third;
   third->next=fourth;
   fourth->next=fifth;
   
// printing the ll

   node*head=first;

node::printll(head);
node::printlength(head);
}