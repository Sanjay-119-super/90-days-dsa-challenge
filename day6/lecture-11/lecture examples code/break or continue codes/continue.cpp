#include <iostream>
using namespace std;

int main() {
    int i = 1, n = 10;
    do {
        if (i == 4) {
            i++; // Increment i and skip printing for this number
            continue;
        }
        cout << i << " ";
        i++;
    } while (i <= n);
    return 0;
}
