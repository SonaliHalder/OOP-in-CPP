/*
What is an Abstract Class?
-> A class with at least one pure virtual function
-> You cannot create objects of abstract classes
-> It is meant to be inherited and implemented by derived classes
*/
#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function → makes class abstract
    virtual void area() = 0;

    // Normal function 
    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class must override the pure virtual function
class Circle : public Shape {
public:
    void area() override {
        cout << "Area of circle = π * r * r" << endl;
    }
};

// Another derived class
class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of rectangle = length * width" << endl;
    }
};

int main() {
    // Shape s; ❌ Not allowed: cannot create object of abstract class

    // Creating objects of derived classes
    Circle c;
    Rectangle r;

    // Calling overridden functions
    c.display();
    c.area();

    r.display();
    r.area();

    return 0;
}
