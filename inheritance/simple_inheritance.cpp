/* 
Base class (Parent): The class whose properties are inherited
Derived class (Child): The class that inherits from the base
*/
// single_inheritance- The child class inherits directly from the 1 parent class
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.bark();  // Dog's own function
    return 0;
}
