#include <iostream>   // input-output ke liye
#include <string>     // string type ke liye
using namespace std;

int main() {
    // Integer
    int age = 21;  

    // Decimal numbers
    float pi = 3.14f;   // single precision
    double g = 9.81;    // double precision (more accurate)

    // Character
    char grade = 'A';

    // Boolean
    bool isStudent = true;

    // String
    string name = "Sanjay";

    // Output sab values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Pi: " << pi << endl;
    cout << "Gravity: " << g << endl;
    cout << "Is Student: " << isStudent << endl; // true = 1, false = 0

    return 0;
}
