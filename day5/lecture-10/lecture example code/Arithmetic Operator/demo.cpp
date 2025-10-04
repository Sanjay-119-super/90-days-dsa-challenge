#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // 🔹 Binary Arithmetic Operators
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (integer division)" << endl;
    cout << "a % b = " << (a % b) << endl;

    // 🔹 Unary Arithmetic Operators
    int x = 5;
    cout << "\nInitial x = " << x << endl;

    cout << "Unary +x = " << (+x) << endl;   // just returns x
    cout << "Unary -x = " << (-x) << endl;   // negates x

    cout << "Pre-increment ++x = " << (++x) << endl; // first increment then print
    cout << "Post-increment x++ = " << (x++) << endl; // first print then increment
    cout << "Value after post-increment x = " << x << endl;

    cout << "Pre-decrement --x = " << (--x) << endl;
    cout << "Post-decrement x-- = " << (x--) << endl;
    cout << "Value after post-decrement x = " << x << endl;

    return 0;
}
