/*Encapsulation is the process of hiding the internal details of a class and restricting direct access to its data.
Instead, we provide getters and setters to access and modify the data safely.Think of it like a capsule — it keeps the medicine inside safe and only allows controlled usage*/

#include <iostream>
using namespace std;

class Student {
private:
    // Private data members → data hiding
    string name;
    int age;

public:
    // Setter method to set name
    void setName(string n) {
        name = n;
    }

    // Getter method to get name
    string getName() {
        return name;
    }

    // Setter method to set age safely
    void setAge(int a) {
        if (a > 0)  // simple validation
            age = a;
        else
            cout << "Invalid age!" << endl;
    }

    // Getter method to get age
    int getAge() {
        return age;
    }
};

int main() {
    Student s1;

    // Setting values using setter methods
    s1.setName("Arun");
    s1.setAge(20);

    // Accessing values using getter methods
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Age: " << s1.getAge() << endl;

    // Direct access is NOT allowed → Error if you try:
    // s1.age = 25; ❌

    return 0;
}
