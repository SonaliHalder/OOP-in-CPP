#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    void add(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }

    // Overloaded function to add two floating-point numbers
    void add(float a, float b) {
        cout << "Sum of two floats: " << a + b << endl;
    }

    // Overloaded function to add three integers
    void add(int a, int b, int c) {
        cout << "Sum of three integers: " << a + b + c << endl;
    }
};

int main() {
    Calculator calc;

    // Calling overloaded functions with different argument types/counts
    calc.add(10, 20);        // Calls add(int, int)
    calc.add(5.5f, 4.5f);    // Calls add(float, float)
    calc.add(1, 2, 3);       // Calls add(int, int, int)

    return 0;
}
