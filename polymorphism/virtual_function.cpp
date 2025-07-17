#include <iostream>
using namespace std;

// Base class with virtual function
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;     // Base class pointer

    Dog d;
    Cat c;

    // Pointing to Dog object
    a = &d;
    a->sound();    // Calls Dog's sound() due to virtual function

    // Pointing to Cat object
    a = &c;
    a->sound();    // Calls Cat's sound() due to virtual function

    return 0;
}
