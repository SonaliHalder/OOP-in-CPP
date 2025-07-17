/*Function Overriding allows a derived class to redefine a function of the base class using the same function name and parameters.
It's an example of runtime polymorphism.*/
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class overriding sound()
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal a;    // Base class object
    Dog d;       // Derived class object

    // Calling functions
    a.sound();   // Calls base class version
    d.sound();   // Calls derived class version (overridden)

    return 0;
}


