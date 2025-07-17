// multilevel inheritance, a class is derived from a child class, which is itself derived from another parent class.
#include <iostream>
using namespace std;

// Base class
class LivingBeing {
public:
    void breathe() {
        cout << "Living being breathes." << endl;
    }
};

// Derived class from LivingBeing
class Animal : public LivingBeing {
public:
    void move() {
        cout << "Animal moves." << endl;
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog d;
    d.breathe();  // From LivingBeing
    d.move();     // From Animal
    d.bark();     // From Dog
    return 0;
}
