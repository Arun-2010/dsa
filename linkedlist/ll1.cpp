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


void insertATbe(node*&head,node*&tail,int data){
    if(head==NULL){
        // empty linked list
        node*newnode=new node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        node*newnode= new node(data);
        newnode->next=head;
        head=newnode;
    }
    
}


void insertATmid(){
    
}



void insertATbeend(node*&head,node*&tail,int data){
    if(head==NULL){
        node*newnode=new node(data);
        head=newnode;
        tail=newnode;
    }else{
        node*newnode=new node(data);
        tail->next=newnode;
        tail=newnode;
    }
    
}
int main() {

node*first=new node(10);
node*second=new node(20);
node*third=new node(30);
node*fourth=new node(40);

first->next=second;
second->next=third;
third->next=fourth;

node*head=first;
node*tail=fourth;


    cout << "Before insert at beginning:";
    printll(head);

   insertATbe(head, tail, 5);

    cout << "\n After insert at beginning:";
    printll(head);

    cout << "\n Before insert at end:";
    printll(head);

   insertATbeend(head, tail, 10);

    cout << "\n After insert at end:";
    printll(head);



}


 /*output:
Before insert at beginning:10->20->30->40->
 After insert at beginning:5->10->20->30->40->
 Before insert at end:5->10->20->30->40->
 After insert at end:5->10->20->30->40->10->
 */