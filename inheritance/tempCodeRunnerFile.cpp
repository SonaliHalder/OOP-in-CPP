// protected members are accessible within the class and in its derived classes, but not from outside.
#include <iostream>
using namespace std;

// Base class with a protected member
class Person {
protected:
    string name; // accessible in derived class, not outside

public:
    void setName(string n) {
        name = n;
    }
};

// Derived class accessing protected member
class Student : public Person {
public:
    void display() {
        // Accessing protected member from base class
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    Student s1;

    // Using public method to set name
    s1.setName("ABC");

    // Using derived class method to display
    s1.display();

    // ❌ This would give an error: 'name' is protected
    // cout << s1.name;

    return 0;
}
