#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default Constructor or Non - Parameterized Constructor
    Student() {
        cout << "Default constructor called!" << endl;
        name = "Unknown";
        age = 0;
    }

    // Parameterized Constructor
    Student(string studentName, int studentAge) {
        cout << "Parameterized constructor called!" << endl;
        name = studentName;
        age = studentAge;
    }

    // Method to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating student1 with default constructor..." << endl;
    Student student1; // Calls default constructor

    cout << "\nCreating student2 with parameterized constructor..." << endl;
    Student student2("ABC", 22); // Calls parameterized constructor

    cout << "\nDisplaying student details:\n";
    student1.display();
    student2.display();

    cout << "\nExiting main...\n";
    return 0;
}
