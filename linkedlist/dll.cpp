#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;

    node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Print the doubly linked list
void printll(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Get length of the list
int getlength(node* head) {
    int c = 0;
    while (head != NULL) {
        c++;
        head = head->next;
    }
    return c;
}

// Insert at head
void insertAtHead(node*& head, node*& tail, int data) {
    node* newnode = new node(data);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

// Insert at end
void insertAtend(node*& head, node*& tail, int data) {
    node* newnode = new node(data);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

// Insert at any position
void insertATmid(node*& head, node*& tail, int data, int position) {
    int length = getlength(head);

    // Handle invalid positions
    if (position < 1 || position > length + 1) {
        cout << "\nInvalid position!\n";
        return;
    }

    // If inserting into an empty list
    if (head == NULL) {
        node* newnode = new node(data);
        head = tail = newnode;
        return;
    }

    // Insert at head
    if (position == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    // Insert at end
    if (position == length + 1) {
        insertAtend(head, tail, data);
        return;
    }

    // Insert in the middle
    node* currnode = head;
    node* prevnode = NULL;

    for (int i = 1; i < position; i++) {
        prevnode = currnode;
        currnode = currnode->next;
    }

    node* newnode = new node(data);
    prevnode->next = newnode;
    newnode->prev = prevnode;
    newnode->next = currnode;
    currnode->prev = newnode;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    cout << "Doubly Linked List: ";
    printll(head);
    cout << "Head: " << head->data << ", Tail: " << tail->data << endl;

    insertAtend(head, tail, 50);
    cout << "\nAfter inserting 50 at end:\n";
    printll(head);
    cout << "Head: " << head->data << ", Tail: " << tail->data << endl;

    insertATmid(head, tail, 60, 3);
    cout << "\nAfter inserting 60 at position 3:\n";
    printll(head);
    cout << "Head: " << head->data << ", Tail: " << tail->data << endl;

    return 0;
}
