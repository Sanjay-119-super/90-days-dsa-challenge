#include <iostream>
using namespace std;

int main() {

    int a=10;
    char c ='A';

    a=c;
    c=a;
    cout<<a<<" "<<c <<endl;
    // Implicit Casting (safe, no data loss here)
    int x = 10;
    double y = x; // int → double (safe, 10 becomes 10.0)
    cout << "Implicit cast (int to double): " << y << endl;

    // Explicit Casting (possible data loss)
    double pi = 3.14159;
    int intPi = (int)pi; // decimal part lost
    cout << "Explicit cast (double to int): " << intPi << endl;

    // Data loss example (int → char)
    int bigNum = 300; 
    char ch = (char)bigNum; // char is 1 byte, value wraps around
    cout << "Casting int 300 to char: " << ch << " (numeric: " << (int)ch << ")" << endl;

    // Overflow case
    int large = 100000;
    short small = (short)large; // short can't store full int
    cout << "Casting int 100000 to short: " << small << endl;

    return 0;
}
