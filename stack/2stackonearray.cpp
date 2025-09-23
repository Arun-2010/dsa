// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top1;
    int top2;
    
    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];  
        top1 = -1;
        top2 = size;
    }
    
    // Push in stack1
    void push1(int data) {
        if (top2 - top1 == 1) {
            // no space available  
            cout << "Overflow in Stack1" << endl;
        } else {
            top1++;
            arr[top1] = data;
        }
    }
    
    // Push in stack2
    void push2(int data) {
        if (top2 - top1 == 1) {
            // no space available  
            cout << "Overflow in Stack2" << endl;
        } else {
            top2--;
            arr[top2] = data;
        }
    }
    
    // Pop from stack1
    void pop1() {
        if (top1 == -1) {
            // stack1 is empty 
            cout << "Underflow in Stack1" << endl;
        } else {
            arr[top1] = 0;
            top1--;
        }
    }
    
    // Pop from stack2
    void pop2() {
        if (top2 == size) {
            cout << "Underflow in Stack2" << endl;
        } else {
            arr[top2] = 0;
            top2++;   
        }
    }
    
    // Print array state
    void print() {
        cout << endl;
        cout << "top1: " << top1 << endl;
        cout << "top2: " << top2 << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st(6);
    st.print();
    
    st.push1(10);
    st.print();
    
    st.push1(20);
    st.print();
    
    st.push2(60);
    st.print();
    
      st.push2(50);
    st.print();
    
      st.push2(40);
    st.print();
    
    st.push1(30);
    st.print();
    
    //   st.push1(100);
    //   st.push2(200);
    
    
    st.pop1();
    st.print();
 
    st.pop2();
    st.print();
    
    
}



output:

top1: -1
top2: 6
0 0 0 0 0 0 

top1: 0
top2: 6
10 0 0 0 0 0 

top1: 1
top2: 6
10 20 0 0 0 0 

top1: 1
top2: 5
10 20 0 0 0 60 

top1: 1
top2: 4
10 20 0 0 50 60 

top1: 1
top2: 3
10 20 0 40 50 60 

top1: 2
top2: 3
10 20 30 40 50 60 

top1: 1
top2: 3
10 20 0 40 50 60 

top1: 1
top2: 4
10 20 0 0 50 60 


=== Code Execution Successful ===