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

void deltenode(node*& head, node*& tail, int position) {
    int length = getlength(head);

    if (head == NULL) {
        cout << "Cannot delete, list is empty!" << endl;
        return;
    }

    if (position < 1 || position > length) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Case 1: Delete first node
    if (position == 1) {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

        // If list becomes empty after deletion
        if (head == NULL) {
            tail = NULL;
        }
        return;
    }

    // Case 2: Delete last node
    if (position == length) {
        node* prev = head;
        while (prev->next != tail) {
            prev = prev->next;
        }
        prev->next = NULL;
        delete tail;
        tail = prev;
        return;
    }

    // Case 3: Delete a middle node
    node* prev = NULL;
    node* curr = head;

    for (int i = 1; i < position; i++) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}


int main() {
     node*head=NULL;
    node*tail=NULL;
    insertATbe(head,tail,40);
    insertATbe(head, tail, 30);
    insertATbe(head, tail, 20);
    insertATbe(head, tail, 10);

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

   cout<<"after deleting:   ";
   deltenode(head,tail,3);
   printll(head);
    
    return 0;
}


/*Output:

Before insert at beginning: 10 -> 20 -> 30 -> 40 -> 
After insert at beginning: 68 -> 10 -> 20 -> 30 -> 40 -> 
Before insert at end: 68 -> 10 -> 20 -> 30 -> 40 -> 
After insert at end: 68 -> 10 -> 20 -> 30 -> 40 -> 58 -> 
Position case before: 68 -> 10 -> 20 -> 30 -> 40 -> 58 -> 
Position case after: 68 -> 10 -> 244 -> 20 -> 30 -> 40 -> 58 -> 
after deleting:   68 -> 10 -> 20 -> 30 -> 40 -> 58 -> */