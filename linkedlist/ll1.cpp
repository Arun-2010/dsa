// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;


node(int data){
    this->data=data;
    this->next=NULL;
}
};
void printll(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}




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
node*head=first;
printll(head);
   
}


// the output is 10->20->30->40->50->