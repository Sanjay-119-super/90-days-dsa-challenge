#include<iostream>
using namespace std;

// 🧮 Function 1: Returns int → factorial
int fact(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// ➕ Function 2: Returns int → sum of 1 to n
int sum(int n) {
    int s = 0;
    for(int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

// 🔢 Function 3: Returns bool → prime check
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

// 📏 Function 4: Returns float → average of two numbers
float average(int a, int b) {
    return (a + b) / 2.0;
}

// 🔤 Function 5: Returns char → grading system
char grade(int marks) {
    if(marks >= 90) return 'A';
    else if(marks >= 75) return 'B';
    else if(marks >= 50) return 'C';
    else return 'F';
}

// 💬 Function 6: void → just prints message
void greet() {
    cout << "Welcome to Coder Army 🫡" << endl;
}

int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    greet(); // void function
    cout << "Factorial of a: " << fact(a) << endl;
    cout << "Sum till b: " << sum(b) << endl;
    cout << "Is a prime? " << (isPrime(a) ? "Yes" : "No") << endl;
    cout << "Average: " << average(a, b) << endl;
    cout << "Grade for 83 marks: " << grade(83) << endl;

    return 0;
}
