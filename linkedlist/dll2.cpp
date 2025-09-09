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
    cout << "NULL" << endl;
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

// Delete node at any position
void deleteAtpos(node*& head, node*& tail, int data, int position) {
    int length = getlength(head);

    // Invalid position
    if (position < 1 || position > length) {
        cout << "\nInvalid position!\n";
        return;
    }

    // Delete first node
    if (position == 1) {
        node* temp = head;
        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL; // If list becomes empty
        }

        temp->next = NULL;
        delete temp;
    }
    // Delete last node
    else if (position == length) {
        node* prevnode = tail->prev;
        node* temp = tail;
        if (prevnode != NULL)
            prevnode->next = NULL;

        tail = prevnode;
        temp->prev = NULL;
        delete temp;
    }
    // Delete middle node
    else {
        node* prevnode = NULL;
        node* currnode = head;

        for (int i = 1; i < position; i++) {
            prevnode = currnode;
            currnode = currnode->next;
        }

        node* nextnode = currnode->next;
        prevnode->next = nextnode;
        nextnode->prev = prevnode;

        currnode->prev = NULL;
        currnode->next = NULL;

        delete currnode;
    }
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

    insertAtend(head, tail, 50);
    cout << "\nAfter inserting 50 at end:\n";
    printll(head);

    insertATmid(head, tail, 60, 3);
    cout << "\nAfter inserting 60 at position 3:\n";
    printll(head);

    deleteAtpos(head, tail, 0, 1);
    cout << "\nAfter deleting node at position 1:\n";
    printll(head);

    deleteAtpos(head, tail, 0, getlength(head));
    cout << "\nAfter deleting last node:\n";
    printll(head);

    deleteAtpos(head, tail, 0, 2);
    cout << "\nAfter deleting node at position 2:\n";
    printll(head);

    return 0;
}
