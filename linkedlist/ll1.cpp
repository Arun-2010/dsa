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



same but different way 
#include <iostream>
using namespace std;

// Define the Node class
class Node {
public:
    int data;
    Node* next;

    // change 1. Constructor with data
    Node(int value) {
        data = value;
        next = NULL;
    }

    // Function to print the list
    static void printList(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Function to print the length of the list
    static void printLength(Node* head) {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        cout << "Length: " << count << endl;
    }
};

int main() {
    // Create 5 nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // Link the nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Head of the list
    Node* head = first;

    // Print the linked list
    Node::printList(head);

    // Print the length of the list
    Node::printLength(head);

    return 0;
}
