#include <iostream>
using namespace std;

// Student class with encapsulated data
class Student {
private:
    // Private data members: cannot be accessed directly
    string name;
    int age;

public:
    // Setter function to set the student's name
    void setName(string studentName) {
        name = studentName;
    }

    // Getter function to get the student's name
    string getName() {
        return name;
    }

    // Setter function to set the student's age
    void setAge(int studentAge) {
        if (studentAge > 0)  
            age = studentAge;
        else
            cout << "Invalid age!" << endl;
    }

    // Getter function to get the student's age
    int getAge() {
        return age;
    }
};

int main() {
    Student s1;  // Creating an object of Student class

    // Setting values using setter functions
    s1.setName("ABC");
    s1.setAge(22);

    // Getting values using getter functions
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Age: " << s1.getAge() << " years" << endl;

    return 0;
}
