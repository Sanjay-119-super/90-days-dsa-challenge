#include <iostream>
#include <vector>
#include <algorithm> // for sort()

using namespace std;

int main() {
    // 1️⃣ Declaration
    vector<int> v; // empty vector

    // 2️⃣ Push elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector after push_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 3️⃣ Size & Capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // 4️⃣ Insert at specific position
    v.insert(v.begin() + 1, 15);
    cout << "After insert at index 1: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 5️⃣ Erase element
    v.erase(v.begin() + 2);
    cout << "After erase at index 2: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 6️⃣ Accessing and updating
    v[1] = 50;
    cout << "After updating index 1: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 7️⃣ Sorting ascending
    sort(v.begin(), v.end());
    cout << "Sorted ascending: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 8️⃣ Sorting descending
    sort(v.rbegin(), v.rend());
    cout << "Sorted descending: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 9️⃣ Pop last element
    v.pop_back();
    cout << "After pop_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 🔟 Clear all elements
    v.clear();
    cout << "After clear(): Size = " << v.size() << ", Capacity = " << v.capacity() << endl;

    return 0;
}
