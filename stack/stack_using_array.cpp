#include <iostream>
using namespace std;

#define MAX 100

int stack[MAX];
int top = -1;   // -1 means the stack is empty

void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = x;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    top--;
}

int peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return -1;
    }
    return stack[top];
}

bool isEmpty() {
    return top == -1;
}

void display() {
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    cout << "\n";
}

int main() {
    push(10);
    push(20);
    push(30);

    display();                          // 30 20 10
    cout << "Top: " << peek() << "\n";  // Top: 30

    pop();
    display();                          // 20 10

    return 0;
}