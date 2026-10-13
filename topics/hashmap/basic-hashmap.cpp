#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. DECLARE
    unordered_map<int, int> mp;   // key = int, value = int
    // unordered_map<string, int> mp2;  // key = string, value = int

    // 2. INSERT / UPDATE
    mp[5] = 100;        // key 5 → value 100
    mp[3] = 200;        // key 3 → value 200
    mp[5] = 999;        // key 5 UPDATED to 999 (overwrites)

    // 3. ACCESS
    cout << mp[5];      // prints 999

    // 4. CHECK IF KEY EXISTS
    if (mp.find(3) != mp.end()) {
        cout << "Key 3 exists!";
    }
    // OR
    if (mp.count(3)) {
        cout << "Key 3 exists!";
    }

    // 5. GET WITH DEFAULT (very useful!)
    // If key doesn't exist, return 0 (default) instead of creating it
    int val = mp[10];   // ⚠️ DANGER: this CREATES key 10 with value 0!
    
    // Safe way:
    int val2 = 0;
    if (mp.find(10) != mp.end()) val2 = mp[10];

    // 6. ITERATE
    for (auto &p : mp) {//return key value pair -not idx
        cout << p.first << " -> " << p.second << endl;
    }

    // 7. SIZE
    cout << mp.size();
}