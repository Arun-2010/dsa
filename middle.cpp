#include <iostream>
#include <stack>
using namespace std;

void findMiddle(stack<int>& st, int size, int curr) {
    // middle index depends on size (lower middle for even)
    int middleIndex = size / 2;  

    if (curr == middleIndex) {
        cout << "Middle element is: " << st.top() << endl;
        return;
    }

    int x = st.top();
    st.pop();

    findMiddle(st, size, curr + 1);

    st.push(x); // restore
}

int main() {
    stack<int> st1, st2;

    // Odd stack size (5 elements)
    for (int i = 1; i <= 5; i++) st1.push(i); // stack: 1 2 3 4 5 (5 is top)
    cout << "Odd case (5 elements): ";
    findMiddle(st1, st1.size(), 0);

    // Even stack size (6 elements)
    for (int i = 1; i <= 6; i++) st2.push(i); // stack: 1 2 3 4 5 6 (6 is top)
    cout << "Even case (6 elements): ";
    findMiddle(st2, st2.size(), 0);

    return 0;
}
