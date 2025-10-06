#include<iostream>
using namespace std;

// Pass by Value
void incrementByValue(int num) {
    num++;
    cout << "[Value] Inside function: " << num << endl;
}

// Pass by Reference
void incrementByRef(int &num) {
    num++;
    cout << "[Reference] Inside function: " << num << endl;
}

int main() {
    int x = 10;
    
    cout << "Before any function: " << x << endl;
    incrementByValue(x);
    cout << "After pass-by-value: " << x << endl;
    
    incrementByRef(x);
    cout << "After pass-by-reference: " << x << endl;

    return 0;
}
/*
🎯 4️⃣ Test & Iterate
✅ Pass by Value → safe, isolated, use for read-only data
✅ Pass by Reference → efficient, mutable, use for updates or large data structures
*/