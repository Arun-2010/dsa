#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int getlength(node* head) {
    int c = 0;
    while (head != NULL) {
        c++;
        head = head->next;
    }
    return c;
}

void printll(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "\n";
}

void insertATbe(node*& head, node*& tail, int data) {
    node* newnode = new node(data);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

void insertATbeend(node*& head, node*& tail, int data) {
    node* newnode = new node(data);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void insertATmid(node*& head, node*& tail, int data, int position) {
    int length = getlength(head);

    if (position < 1 || position > length + 1) {
        cout << "\nInvalid position!\n";
        return;
    }

    if (position == 1) {
        insertATbe(head, tail, data);
        return;
    }

    if (position == length + 1) {
        insertATbeend(head, tail, data);
        return;
    }

    node* newnode = new node(data);
    node* curr = head;

    // Move curr to (position - 1)th node
    for (int i = 1; i < position - 1; i++) {
        curr = curr->next;
    }

    newnode->next = curr->next;
    curr->next = newnode;
}

void deleteList(node*& head) {
    node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;

    node* head = first;
    node* tail = fourth;

    cout << "Before insert at beginning: ";
    printll(head);

    insertATbe(head, tail, 68);
    cout << "After insert at beginning: ";
    printll(head);

    cout << "Before insert at end: ";
    printll(head);

    insertATbeend(head, tail, 58);
    cout << "After insert at end: ";
    printll(head);

    cout << "Position case before: ";
    printll(head);

    cout << "Position case after: ";
    insertATmid(head, tail, 244, 3);
    printll(head);

    // Free memory
    deleteList(head);
    return 0;
}

 /*Before insert at beginning: 10 -> 20 -> 30 -> 40 -> 
After insert at beginning: 68 -> 10 -> 20 -> 30 -> 40 -> 
Before insert at end: 68 -> 10 -> 20 -> 30 -> 40 -> 
After insert at end: 68 -> 10 -> 20 -> 30 -> 40 -> 58 -> 
Position case before: 68 -> 10 -> 20 -> 30 -> 40 -> 58 -> 
Position case after: 68 -> 10 -> 244 -> 20 -> 30 -> 40 -> 58 -> */