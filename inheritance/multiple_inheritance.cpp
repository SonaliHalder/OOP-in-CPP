// In multiple inheritance, a class can inherit from more than one base class.
#include <iostream>
using namespace std;

// First base class
class Engine {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

// Second base class
class MusicSystem {
public:
    void playMusic() {
        cout << "Playing music." << endl;
    }
};

// Derived class with multiple inheritance
class Car : public Engine, public MusicSystem {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine();  // From Engine
    myCar.playMusic();    // From MusicSystem
    myCar.drive();        // From Car
    return 0;
}
