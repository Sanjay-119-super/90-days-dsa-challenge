#include<iostream>
using namespace std;

void show(int a, double b) {
    cout << "int-double version called\n";
}

void show(double a, int b) {
    cout << "double-int version called\n";
}

int main() {
    show(5, 5.5);  // int-double version
    show(5.5, 5);  // double-int version
    return 0;
}
