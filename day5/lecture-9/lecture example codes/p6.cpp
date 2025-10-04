#include<iostream>
using namespace std;

int main() {
    int rows = 5; // The number of rows for the top half, which determines the overall size.

    // This loop generates the upper half of the diamond, including the middle row.
    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces to center the stars.
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Print the stars, with a space between each star.
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl;
    }

    // This loop generates the lower half of the diamond.
    for (int i = rows - 1; i >= 1; --i) {
        // Print leading spaces to center the stars.
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Print the stars, with a space between each star.
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
