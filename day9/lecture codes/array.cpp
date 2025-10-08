#include <iostream>
#include <climits> // for INT_MAX, INT_MIN
using namespace std;

int main() {

    // ✅ 5 Ways to Initialize an Array

    // 1️⃣ Full Initialization
    int a1[5] = {1, 2, 3, 4, 5};
    cout << "1️⃣ Full Initialization: ";
    for (int i = 0; i < 5; i++) cout << a1[i] << " ";
    cout << endl;

    // 2️⃣ Auto-size Initialization
    int a2[] = {1, 2, 3, 4, 5};
    cout << "2️⃣ Auto-size Initialization: ";
    for (int i = 0; i < 5; i++) cout << a2[i] << " ";
    cout << endl;

    // 3️⃣ User Input Initialization
    int size = 5;
    int a3[1000];
    cout << "3️⃣ Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) cin >> a3[i];
    cout << "   You entered: ";
    for (int i = 0; i < size; i++) cout << a3[i] << " ";
    cout << endl;

    // 4️⃣ Partial Initialization (remaining elements become 0)
    int a4[5] = {1, 2};
    cout << "4️⃣ Partial Initialization: ";
    for (int i = 0; i < 5; i++) cout << a4[i] << " ";
    cout << endl;

    // 5️⃣ Zero Initialization
    int a5[5] = {0};
    cout << "5️⃣ Zero Initialization: ";
    for (int i = 0; i < 5; i++) cout << a5[i] << " ";
    cout << endl;

    // ✅ Find Array Length
    int arr[] = {10, 5, 3, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nArray Length = " << n << endl;

    // ✅ Find Minimum Element
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    cout << "Minimum Element = " << minVal << endl;

    // ✅ Find Maximum Element
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    cout << "Maximum Element = " << maxVal << endl;

    // ✅ Array Index Out of Bound Example (Safe Check)
    int index;
    cout << "\nEnter index to access (0 - " << n - 1 << "): ";
    cin >> index;

    if (index >= 0 && index < n)
        cout << "Element at index " << index << " = " << arr[index] << endl;
    else
        cout << "⚠️ Index Out of Bounds! Valid range: 0 to " << n - 1 << endl;

    return 0;
}
