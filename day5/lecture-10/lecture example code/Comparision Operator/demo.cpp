#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "\nComparing " << x << " and " << y << "...\n";

    // Equal to
    if (x == y) {
        cout << x << " is equal to " << y << endl;
    }

    // Not equal to
    if (x != y) {
        cout << x << " is NOT equal to " << y << endl;
    }

    // Less than
    if (x < y) {
        cout << x << " is less than " << y << endl;
    }

    // Greater than
    if (x > y) {
        cout << x << " is greater than " << y << endl;
    }

    // Less than or equal to
    if (x <= y) {
        cout << x << " is less than OR equal to " << y << endl;
    }

    // Greater than or equal to
    if (x >= y) {
        cout << x << " is greater than OR equal to " << y << endl;
    }

    return 0;
}
