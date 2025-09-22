#include <iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top;

    // Constructor
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    // Push operation
    void push(int data) {
        if (top == size - 1) {
            cout << "Stack Overflow! Cannot push " << data << endl;
            return;
        }
        arr[++top] = data;
        cout << data << " pushed into stack." << endl;
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    // Peek operation (renamed from top() to peek())
    int peek() {
        if (top == -1) {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is Empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5); // stack of size 5

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.display();

    return 0;
}
