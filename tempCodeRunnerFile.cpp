#include <iostream>
using namespace std;

// First base class
class A {
public:
    void showA() {
        cout << "This is class A." << endl;
    }
};

// Second base class
class B {
public:
    void showB() {
        cout << "This is class B." << endl;
    }
};

// Derived class inherits from both A and B
class C : public A, public B {
public:
    void showC() {
        cout << "This is class C (derived from A and B)." << endl;
    }
};

int main() {
    C obj;

    // Accessing members from both base classes and derived class
    obj.showA();  // From class A
    obj.showB();  // From class B
    obj.showC();  // From class C

    return 0;
}
