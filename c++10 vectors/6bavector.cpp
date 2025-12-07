// FUNTIONS OF VECOTRS: 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    cout << v.size() << endl;     // Output: 4
    cout << v.capacity() << endl; // Output: e.g. 4 or 8

    v.clear();

    cout << v.size() << endl;     // Output: 0
    cout << v.capacity() << endl; // capacity same as before
}

// What v.clear() does

// Saare elements delete

// size() becomes 0

// capacity() same rehti hai (memory free nahi hoti)