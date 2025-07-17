#include<iostream>
using namespace std;
// Class definition
class Student{

    private:                 // Private data members – cannot be accessed directly outside the class(By default class is private)
    string name;
    int age;

    public:                  
    // Public method to set student details
    void setDetails(string studentName, int studentAge){
        name=studentName;
        age=studentAge;
    }
    // Public method to display student details
    void displayDetails(){
        cout<< "Name:" << " " << name << endl;
         cout<< "Age:" << " " << age <<" "<< "years" << endl;
        
    }
};
int main(){
     // Creating an object of Student class
     Student s1; 
     // Using dot operator to access public methods 
     s1.setDetails("ABC", 22);        
     s1.displayDetails();
     return 0;    

}