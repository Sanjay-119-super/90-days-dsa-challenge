#include <iostream>
using namespace std;

int main() {
    int a = 10;  // Simple assignment (=)
    int b = 5;

    cout << "Initial a = " << a << ", b = " << b << endl;

    // ---------- += operator ----------
    a += b; // a = a + b
    cout << "After a += b, a = " << a << endl; // 15

    // ---------- -= operator ----------
    a -= b; // a = a - b
    cout << "After a -= b, a = " << a << endl; // 10

    // ---------- *= operator ----------
    a *= b; // a = a * b
    cout << "After a *= b, a = " << a << endl; // 50

    // ---------- /= operator ----------
    a /= b; // a = a / b
    cout << "After a /= b, a = " << a << endl; // 10

    // ---------- %= operator ----------
    a %= b; // a = a % b
    cout << "After a %= b, a = " << a << endl; // 0

    // ---------- &= operator ----------
    a = 6;  // 0110
    b = 3;  // 0011
    a &= b; // a = a & b
    cout << "After a &= b, a = " << a << endl; // 2 (0010)

    // ---------- |= operator ----------
    a |= b; // a = a | b
    cout << "After a |= b, a = " << a << endl; // 3 (0011)

    // ---------- ^= operator ----------
    a ^= b; // a = a ^ b
    cout << "After a ^= b, a = " << a << endl; // 0 (0011 ^ 0011)

    // ---------- <<= operator ----------
    a = 2;  // 0010
    a <<= 1; // a = a << 1
    cout << "After a <<= 1, a = " << a << endl; // 4 (0100)

    // ---------- >>= operator ----------
    a >>= 2; // a = a >> 2
    cout << "After a >>= 2, a = " << a << endl; // 1 (0001)

    return 0;
}
