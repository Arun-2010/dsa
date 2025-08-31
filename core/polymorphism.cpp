/*
Polymorphism means "many forms".
In C++, it allows one function, operator, or object to behave differently based on the situation.

There are two main types of polymorphism in C++:

1. Compile-time Polymorphism (Static Binding):
   - Achieved through function overloading and operator overloading.
   - The decision about which function to call is made at compile time.


   two types
   Function Overloading → Same function name, different parameters.
   Operator Overloading → Same operator works differently.

2. Run-time Polymorphism (Dynamic Binding):
   - Achieved through inheritance and virtual functions.
   - The decision about which function to call is made at run time.

*/
//function overloading

#include <iostream>
using namespace std;

class Math {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math obj;

    cout << "Sum of 2 numbers: " << obj.add(10, 20) << endl;
    cout << "Sum of 3 numbers: " << obj.add(10, 20, 30) << endl;

    return 0;
}


//operator overloading
#include <iostream>
using namespace std;

class B {
public:
    int a;

    // Overloading the '+' operator
    void operator+(B &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output: " << value2 - value1 << endl;
    }
};

int main() {
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;  // Calls overloaded + operator
    return 0;
}
