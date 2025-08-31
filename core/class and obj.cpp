A class is like a blueprint or plan.

It does not occupy memory by itself.

It just defines the data (variables) and behavior (functions) of something.

Think of a Car Blueprint 🚗:

It has specifications like color, model, speed.

But the blueprint itself is not a real car — it’s just a design.

--------------------------------------------------------------------------------

An object is a real instance created from a class.

It occupies memory.

Using an object, we can access the class’s data and functions.

Example (Real Life):
From the Car Blueprint, if you manufacture a car, that real car is an object.

--------------------------------------------------------------------------------

#include <iostream>
using namespace std;

// Class → Blueprint
class Car {
public:
    string brand;
    int speed;

    // Method (function inside class)
    void displayInfo() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    // Creating objects → real cars from blueprint
    Car car1;   // First object
    Car car2;   // Second object

    // Assign values to car1
    car1.brand = "BMW";
    car1.speed = 180;

    // Assign values to car2
    car2.brand = "Audi";
    car2.speed = 200;

    // Calling functions using objects
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}
